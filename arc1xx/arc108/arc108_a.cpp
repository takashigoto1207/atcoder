#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll S, P;
  cin >> S >> P;

  for (ll i = 1; i * i <= P; i++) {
    if (P % i == 0 && S == i + (P / i)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}