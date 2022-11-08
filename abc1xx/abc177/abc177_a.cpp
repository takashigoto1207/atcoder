#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int D, T, S;
  cin >> D >> T >> S;

  if (D <= T * S)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}