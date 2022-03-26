#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int a[N][3];
  rep(i, N) rep(j, 3) cin >> a[i][j];

  int ans = N * (N - 1) / 2;
  rep(i, N) for (int j = i + 1; j < N; j++) {
    if (a[i][2] <= a[j][1])
      ans--;
    else if (a[j][2] <= a[i][1])
      ans--;
    if (a[i][2] == a[j][1] && a[i][0] % 2 == 1 && a[j][0] <= 2)
      ans++;
    else if (a[j][2] == a[i][1] && a[j][0] % 2 == 1 && a[i][0] <= 2)
      ans++;
  }

  cout << ans << endl;
  return 0;
}