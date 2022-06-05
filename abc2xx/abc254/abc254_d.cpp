#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int x = i;
    for (int j = 2; j * j <= x; j++) {
      while (x % (j * j) == 0) x /= j * j;
    }
    for (int k = 1; x * k * k <= N; k++) ans++;
  }
  cout << ans << endl;
  return 0;
}