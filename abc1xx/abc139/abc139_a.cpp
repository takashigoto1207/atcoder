#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;
  int ans = 0;
  rep(i, S.size()) {
    if (S[i] == T[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}