#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  set<ll> st;
  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      st.insert(i);
      st.insert(N / i);
    }
  }
  for (ll ans : st) cout << ans << endl;
  return 0;
}