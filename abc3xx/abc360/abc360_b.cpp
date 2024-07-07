#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;
  for (int w = 1; w < S.size(); w++) {
    rep(c, w) {
      string tmp = "";
      for (int i = c; i < S.size(); i += w) {
        tmp += S[i];
      }
      if (tmp == T) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}