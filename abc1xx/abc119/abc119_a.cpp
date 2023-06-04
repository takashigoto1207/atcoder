#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[5] == '0' && S[6] - '0' <= 4)
    cout << "Heisei" << endl;
  else
    cout << "TBD" << endl;
  return 0;
}