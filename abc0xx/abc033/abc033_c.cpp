#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  bool flg = false;
  S += '+';
  rep(i, S.size()) {
    if (S[i] == '0') flg = true;
    if (S[i] == '+' && flg)
      flg = false;
    else if (S[i] == '+' && !flg)
      ans++;
  }
  cout << ans << endl;
  return 0;
}