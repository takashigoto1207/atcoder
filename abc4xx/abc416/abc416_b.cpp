#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  string T = S;

  if (T[0] == '.') T[0] = 'o';
  rep(i, S.size() - 1) if (S[i] == '#' && S[i + 1] == '.') T[i + 1] = 'o';
  cout << T << endl;
  return 0;
}