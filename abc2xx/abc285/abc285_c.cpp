#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  ll ans = 0;
  rep(i, S.size()) {
    ans *= 26;
    ans += (int)(S[i] - 'A' + 1);
  }
  cout << ans << endl;
  return 0;
}