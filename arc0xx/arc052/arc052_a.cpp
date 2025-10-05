#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  rep(i, S.size()) if ('0' <= S[i] && S[i] <= '9') cout << S[i];
  cout << endl;
  return 0;
}