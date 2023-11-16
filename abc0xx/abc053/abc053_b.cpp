#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int a = 0;
  int z = 0;
  rep(i, s.size()) {
    if (s[i] == 'A') {
      a = i;
      break;
    }
  }

  rep(i, s.size()) {
    if (s[s.size() - i - 1] == 'Z') {
      z = s.size() - i - 1;
      break;
    }
  }

  cout << z - a + 1 << endl;
  return 0;
}