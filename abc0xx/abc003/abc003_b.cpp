#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool check(string s, string t) {
  rep(i, s.size()) {
    if (s[i] != t[i]) {
      if (s[i] == '@' &&
          (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' ||
           t[i] == 'd' || t[i] == 'e' || t[i] == 'r'))
        continue;
      if (t[i] == '@' &&
          (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' ||
           s[i] == 'd' || s[i] == 'e' || s[i] == 'r'))
        continue;
      return false;
    }
  }
  return true;
}

int main() {
  string S, T;
  cin >> S >> T;

  if (check(S, T))
    cout << "You can win" << endl;
  else
    cout << "You will lose" << endl;
  return 0;
}