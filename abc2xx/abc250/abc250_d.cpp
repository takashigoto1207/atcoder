#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  queue<pair<int, int>> que;
  vector<ll> ans;
  int t, x, c;

  rep(i, Q) {
    cin >> t;
    if (t == 1) {
      cin >> x >> c;
      que.push(make_pair(x, c));
    } else {
      cin >> c;
      ll calc = 0;
      while (c > 0) {
        pair<int, int> p = que.front();
        if (p.second <= c) {
          c -= p.second;
          calc += (ll)p.first * p.second;
          que.pop();
        } else {
          calc += (ll)p.first * c;
          que.front().second -= c;
          c = 0;
        }
      }
      ans.push_back(calc);
    }
  }
  for (ll x : ans) cout << x << endl;
  return 0;
}