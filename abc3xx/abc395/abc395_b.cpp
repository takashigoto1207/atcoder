#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s(N, string(N, '.'));
  rep(l, N) {
    int r = N - 1 - l;
    if (l > r) continue;
    char c = '#';
    if (l % 2) c = '.';
    for (int i = l; i <= r; i++) {
      for (int j = l; j <= r; j++) {
        s[i][j] = c;
      }
    }
  }

  rep(i, N) cout << s[i] << endl;
  return 0;
}