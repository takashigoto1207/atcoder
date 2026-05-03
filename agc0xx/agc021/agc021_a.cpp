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
  rep(i, S.size()) ans += int(S[i] - '0');

  cout << max(ans, (int)(S.size() - 1) * 9 + int(S[0] - '0') - 1) << endl;
  return 0;
}