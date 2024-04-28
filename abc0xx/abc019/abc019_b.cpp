#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  char c = s[0];
  int cnt = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1]) {
      cout << s[i - 1] << cnt;
      cnt = 1;
    } else
      cnt++;
  }
  cout << s[s.size() - 1] << cnt << endl;
  return 0;
}