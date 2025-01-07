#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int l = S.size();
  int cur = 0, ans = 0;
  while (cur < l) {
    ans++;
    if ((cur + 1) < l && S[cur] == '0' && S[cur + 1] == '0')
      cur += 2;
    else
      cur++;
  }
  cout << ans << endl;
  return 0;
}