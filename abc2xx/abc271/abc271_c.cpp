#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  unordered_set<int> st;
  rep(i, N) st.insert(a[i]);

  int ans = 0, cost = 0;
  for (int i = 1;; i++) {
    if (st.count(i))
      cost++;
    else
      cost += 2;
    if (cost > N) break;
    ans = i;
  }
  cout << ans << endl;
  return 0;
}