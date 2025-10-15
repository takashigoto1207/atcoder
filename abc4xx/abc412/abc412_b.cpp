#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  bool ans = true;
  for (int i = 1; i < S.size(); i++)
    if (isupper(S[i]) && T.find(S[i - 1]) == string::npos) ans = false;

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}