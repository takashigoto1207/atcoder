#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[0] != S[1] && S[1] != S[2] && S[2] != S[0])
    cout << 6 << endl;
  else if (S[0] == S[1] && S[1] == S[2])
    cout << 1 << endl;
  else
    cout << 3 << endl;
  return 0;
}