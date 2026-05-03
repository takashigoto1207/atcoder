#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int F;
  map<int, int> mp;
  set<int> st;
  rep(i, N) cin >> F, mp[F]++, st.insert(F);

  bool flg = true;
  for (auto x : mp)
    if (x.second > 1) {
      flg = false;
      break;
    }
  if (flg)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  if (st.size() == M)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}