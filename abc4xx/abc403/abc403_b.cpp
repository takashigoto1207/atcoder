#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string T, U;
  cin >> T >> U;

  rep(i, T.size() - U.size() + 1) {
    bool flg = true;
    rep(j, U.size()) if (T[i + j] != U[j] && T[i + j] != '?') flg = false;

    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}