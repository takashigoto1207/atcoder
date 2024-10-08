#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  int len = min(S.size(), T.size());
  if (S == T)
    cout << 0 << endl;
  else if (S.substr(0, len) != T.substr(0, len)) {
    rep(i, len) {
      if (S[i] != T[i]) {
        cout << i + 1 << endl;
        break;
      }
    }
  } else
    cout << len + 1 << endl;
  return 0;
}