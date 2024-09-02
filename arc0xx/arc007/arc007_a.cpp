#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char X;
  string s;
  cin >> X >> s;

  rep(i, s.size()) {
    if (s[i] == X) continue;
    cout << s[i];
  }
  cout << endl;
  return 0;
}