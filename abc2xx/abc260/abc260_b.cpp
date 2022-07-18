#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;

  vector<pair<int, int>> A(N), B(N), AB(N);
  rep(i, N) cin >> A[i].first, A[i].second = -i;
  rep(i, N) cin >> B[i].first, B[i].second = -i;
  rep(i, N) AB[i].first = A[i].first + B[i].first, AB[i].second = A[i].second;
  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());
  sort(AB.rbegin(), AB.rend());

  set<int> st;
  for (auto x : A)
    if (st.size() < X) st.insert(x.second);
  for (auto x : B)
    if (st.find(x.second) == st.end() && st.size() < X + Y) st.insert(x.second);
  for (auto x : AB)
    if (st.find(x.second) == st.end() && st.size() < X + Y + Z)
      st.insert(x.second);

  set<int> ans;
  for (int x : st) ans.insert(-x + 1);
  for (int x : ans) cout << x << endl;
  return 0;
}