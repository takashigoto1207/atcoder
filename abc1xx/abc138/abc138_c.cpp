#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> v(N);
  rep(i, N) cin >> v[i];
  sort(v.begin(), v.end());

  double ans = v[0];
  for (int i = 1; i < N; i++) ans = (ans + v[i]) / 2;
  cout << ans << endl;
  return 0;
}