#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> x(26);
  rep(i, 26) x[S[i] - 'A'] = i;

  int ans = 0;
  rep(i, 25) ans += abs(x[i] - x[i + 1]);
  cout << ans << endl;
  return 0;
}