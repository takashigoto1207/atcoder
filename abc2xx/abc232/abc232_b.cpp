#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  int x = (T[0] - S[0] + 26) % 26;
  rep(i, S.size()) S[i] = (S[i] - 'a' + x) % 26 + 'a';
  if (S == T)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}