#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> mem(200, 0);
  int A;
  rep(i, N) {
    cin >> A;
    mem[A % 200]++;
  }

  ll ans = 0;
  rep(i, 200) ans += mem[i] * (mem[i] - 1) / 2;
  cout << ans << endl;
  return 0;
}