#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string ans;
  int w = 0;
  rep(i, S.size()) w += S[i] - '0';

  int x = 0;
  for (int i = S.size() - 1; 0 <= i; i--) {
    x += w;
    w -= S[i] - '0';
    ans += '0' + (x % 10);
    x /= 10;
  }
  while (x) {
    ans += '0' + (x % 10);
    x /= 10;
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}