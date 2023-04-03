#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(8);
  rep(i, 8) cin >> S[i];

  rep(i, 8) {
    rep(j, 8) {
      if (S[i][j] == '*') {
        cout << "abcdefgh"[j] << 8 - i << endl;
        return 0;
      }
    }
  }
  return 0;
}