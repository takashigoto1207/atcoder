#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[0] != 'A') {
    cout << "WA" << endl;
    return 0;
  }

  for (int i = 1; i < S.size(); i++) {
    if (!islower(S[i]) && S[i] != 'C') {
      cout << "WA" << endl;
      return 0;
    }
  }
  int cnt = 0;
  for (int i = 2; i < (int)S.size() - 1; i++) {
    if (S[i] == 'C') cnt++;
  }
  if (cnt != 1) {
    cout << "WA" << endl;
    return 0;
  }

  cout << "AC" << endl;
  return 0;
}