#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = S.size();
  rep(i, S.size()) if (S[i] == 'w') ans++;
  cout << ans << endl;
  return 0;
}