#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s = {"#"};
  rep(ni, N) {
    int m = s.size(), m3 = m * 3;
    vector<string> t(m3, string(m3, '#'));
    rep(i, m3) rep(j, m3) t[i][j] = s[i % m][j % m];
    rep(i, m) rep(j, m) t[i + m][j + m] = '.';
    s = t;
  }
  rep(i, s.size()) cout << s[i] << endl;
  return 0;
}