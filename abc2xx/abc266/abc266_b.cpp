#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const int mod = 998244353;

int main() {
  ll N;
  cin >> N;

  N %= mod;
  if (N < 0) N += mod;
  cout << N << endl;
  return 0;
}