#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  rep(i, S.size()) {
    if (S[i] == '6')
      cout << 9;
    else if (S[i] == '9')
      cout << 6;
    else
      cout << S[i];
  }
  cout << endl;
  return 0;
}