#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  cout << (Y * Z - 1) / X << endl;
  return 0;
}