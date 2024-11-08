#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  string t = s;
  reverse(s.begin(), s.end());

  rep(i, s.size()) {
    if (s[i] != t[i] && s[i] != '*' && t[i] != '*') {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}