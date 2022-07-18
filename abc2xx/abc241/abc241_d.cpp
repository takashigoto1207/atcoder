#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;
  multiset<ll> st;
  vector<ll> ans;
  rep(i, Q) {
    int c;
    ll x;
    cin >> c >> x;
    if (c == 1) {
      st.insert(x);
    } else {
      int k;
      cin >> k;
      ll mem = -1;
      if (c == 2) {
        auto it = st.upper_bound(x);
        bool ok = true;
        rep(i, k) {
          if (it == st.begin()) {
            ok = false;
            break;
          }
          --it;
        }
        if (ok) mem = *it;
      } else {
        auto it = st.lower_bound(x);
        bool ok = true;
        rep(i, k - 1) {
          if (it == st.end()) {
            ok = false;
            break;
          }
          ++it;
        }
        if (ok && it != st.end()) mem = *it;
      }
      ans.emplace_back(mem);
    }
  }
  for (ll x : ans) cout << x << endl;
  return 0;
}