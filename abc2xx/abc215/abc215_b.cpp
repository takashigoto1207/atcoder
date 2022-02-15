#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll calc = 1;
  int ans = -1;
  while (calc <= N) calc *= 2, ans++;
  cout << ans << endl;
  return 0;
}