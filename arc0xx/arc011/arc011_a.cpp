#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int m, n, N;
  cin >> m >> n >> N;

  int ans = N;
  while (N >= m) {
    ans += N / m * n;
    N = N / m * n + N % m;
  }
  cout << ans << endl;
  return 0;
}