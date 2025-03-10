#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  ll mod = 998244353;
  A = (A * (A + 1) / 2) % mod;
  B = (B * (B + 1) / 2) % mod;
  C = (C * (C + 1) / 2) % mod;
  cout << (A * B % mod) * C % mod << endl;
  return 0;
}