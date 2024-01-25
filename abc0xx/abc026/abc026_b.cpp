#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> R(N);
  rep(i, N) cin >> R[i];
  sort(R.begin(), R.end());

  double ans = 0;
  for (int i = N - 1; i >= 0; i = i - 2) {
    ans += pow(R[i], 2) * acos(-1);
    if (i - 1 != -1) ans -= pow(R[i - 1], 2) * acos(-1);
  }
  cout << setprecision(10) << ans << endl;
  return 0;
}