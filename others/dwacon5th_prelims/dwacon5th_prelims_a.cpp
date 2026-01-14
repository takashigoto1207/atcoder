#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int ans = 0, mn = INT_MAX, sum = 0;
  rep(i, N) sum += a[i];

  rep(i, N) if (mn > abs(sum - a[i] * N)) mn = abs(sum - a[i] * N), ans = i;
  cout << ans << endl;
  return 0;
}