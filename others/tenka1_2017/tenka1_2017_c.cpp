#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  for (ll h = 1; h <= 3500; h++) {
    for (ll n = 1; n <= 3500; n++) {
      if (4 * h * n - N * n - N * h > 0 &&
          (N * n * h) % (4 * h * n - N * n - N * h) == 0) {
        cout << h << " " << n << " "
             << (N * n * h) / (4 * h * n - N * n - N * h) << endl;
        return 0;
      }
    }
  }
  return 0;
}