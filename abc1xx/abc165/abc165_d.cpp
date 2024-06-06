#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, N;
  cin >> A >> B >> N;

  ll x = N;
  if (N >= B - 1) x = B - 1;

  cout << A * x / B - A * (x / B);
  return 0;
}