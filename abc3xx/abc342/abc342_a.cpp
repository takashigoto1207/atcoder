#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  rep(i, S.size()) {
    bool flg = true;
    rep(j, S.size()) if (i != j and S[i] == S[j]) {
      flg = false;
      break;
    }
    if (flg) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}