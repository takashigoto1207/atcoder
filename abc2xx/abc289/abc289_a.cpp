#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  rep(i, s.size()) {
    if (s[i] == '0')
      cout << 1;
    else
      cout << 0;
  }
  cout << endl;
  return 0;
}