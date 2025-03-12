#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int c = -1;
  rep(i, s.size()) {
    if (c == -1 && s[i] == 'C') {
      c = i;
      continue;
    }

    if (c != -1 && s[i] == 'F') {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}