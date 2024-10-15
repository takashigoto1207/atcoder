#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int i = -1;
  int c = -1;
  rep(x, S.size()) {
    if (i == -1 && (char)tolower(S[x]) == 'i') i = x;
    if (i != -1 && c == -1 && (char)tolower(S[x]) == 'c') c = x;
    if (c != -1 && (char)tolower(S[x]) == 't') {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}