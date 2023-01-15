#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[2] == S[3] && S[4] == S[5])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}