#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  for (char c = 'a'; c <= 'z'; c++) {
    bool flg = true;
    rep(i, S.size()) if (S[i] == c) flg = false;
    if (flg) {
      cout << c << endl;
      return 0;
    }
  }
  return 0;
}