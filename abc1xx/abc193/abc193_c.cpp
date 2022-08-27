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
  for (ll i = 2; i <= 100000; i++) {
    ll calc = i * i;
    while (calc <= N) {
      st.insert(calc);
      calc *= i;
    }
  }
  cout << N - st.size() << endl;
  return 0;
}