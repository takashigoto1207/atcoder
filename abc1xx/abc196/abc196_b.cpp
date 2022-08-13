#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string ans = "";
  rep(i, S.length()) {
    if (S[i] != '.')
      ans += S[i];
    else {
      cout << ans << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}