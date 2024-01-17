#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(12);
  rep(i, 12) cin >> S[i];

  int ans = 0;
  rep(i, 12) if (count(S[i].begin(), S[i].end(), 'r') > 0) ans++;
  cout << ans << endl;
  return 0;
}