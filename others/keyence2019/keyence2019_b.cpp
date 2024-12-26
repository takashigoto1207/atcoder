#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S == "keyence") {
    cout << "YES" << endl;
    return 0;
  }

  rep(i, 8) {
    if (S.substr(0, i) + S.substr(S.size() + i - 7, 7 - i) == "keyence") {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}