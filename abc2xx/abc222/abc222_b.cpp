#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, P;
  cin >> N >> P;

  int ans = 0;
  int a;
  rep(i, N) {
    cin >> a;
    if (a < P) ans++;
  }

  cout << ans << endl;
  return 0;
}