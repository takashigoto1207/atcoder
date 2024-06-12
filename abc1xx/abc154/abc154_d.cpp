#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<double> p(N);
  rep(i, N) cin >> p[i];

  int ans = 0;
  rep(i, K) ans += p[i];

  int sum = ans;
  for (int i = K; i < N; i++) {
    sum = sum - p[i - K] + p[i];
    ans = max(ans, sum);
  }
  cout << setprecision(10) << fixed << (double)(ans + K) / 2;
  return 0;
}