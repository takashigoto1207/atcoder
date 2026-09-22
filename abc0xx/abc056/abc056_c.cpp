#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X;
  cin >> X;

  for (ll i = 1; i <= X; i++) {
    if (i * (i + 1) / 2 >= X) {
      cout << i << endl;
      return 0;
    }
  }
}