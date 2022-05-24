#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int ans = INT_MAX;
  rep(i, 10) {
    char x = '0' + i;
    vector<int> num(10);
    rep(j, N) rep(k, 10) if (S[j][k] == x) num[k]++;
    int calc = 0;
    rep(j, 10) calc = max(calc, j + 10 * (num[j] - 1));
    ans = min(ans, calc);
  }
  cout << ans << endl;
  return 0;
}