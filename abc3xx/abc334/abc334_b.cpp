#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int T;
  cin >> S >> T;

  int l = count(S.begin(), S.end(), 'L');
  int r = count(S.begin(), S.end(), 'R');
  int u = count(S.begin(), S.end(), 'U');
  int d = count(S.begin(), S.end(), 'D');
  int q = count(S.begin(), S.end(), '?');

  if (T == 1) {
    cout << abs(r - l) + abs(u - d) + q << endl;
  } else {
    if (abs(r - l) + abs(u - d) <= q) {
      cout << (q - abs(r - l) - abs(u - d)) % 2 << endl;
    } else {
      cout << abs(r - l) + abs(u - d) - q << endl;
    }
  }
  return 0;
}