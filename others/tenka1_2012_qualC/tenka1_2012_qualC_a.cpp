#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 2; i < n; i++) {
    bool prime = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        prime = false;
        break;
      }
    }
    if (prime) ans++;
  }
  cout << ans << endl;
  return 0;
}