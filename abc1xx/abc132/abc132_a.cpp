#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if ((S[0] == S[1] && S[2] == S[3] && S[0] != S[2]) ||
      (S[0] == S[2] && S[1] == S[3] && S[0] != S[1]) ||
      (S[0] == S[3] && S[1] == S[2] && S[0] != S[1]))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}