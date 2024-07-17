#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  double ans = 0;
  rep(i, N) {
    int calc = i + 1;
    double p = (double)1 / N;
    while (calc < K) {
      calc *= 2;
      p /= 2;
    }
    ans += p;
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}