#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

set<ll> gen_tosasu() {
  set<ll> res;
  for (int fir = 1; fir <= 9; fir++) {
    for (int d = -9; d <= 8; d++) {
      string s;
      int dg = fir;
      for (int i = 0; i < 18; i++) {
        s.push_back(dg + '0');
        res.insert(stoll(s));
        dg += d;
        if (!(0 <= dg && dg <= 9)) {
          break;
        }
      }
    }
  }
  return res;
}
int main() {
  ll X;
  cin >> X;
  set<ll> st = gen_tosasu();
  cout << (*st.lower_bound(X)) << endl;
  return 0;
}