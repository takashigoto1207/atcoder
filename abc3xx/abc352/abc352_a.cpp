#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if (min(X, Y) < Z && Z < max(X, Y))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}