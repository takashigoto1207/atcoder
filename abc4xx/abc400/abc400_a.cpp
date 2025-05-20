#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A;
  cin >> A;

  if (400 % A != 0)
    cout << -1 << endl;
  else
    cout << 400 / A << endl;
  return 0;
}