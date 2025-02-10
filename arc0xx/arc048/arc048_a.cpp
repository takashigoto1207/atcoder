#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B;
  cin >> A >> B;

  if (0 < A * B)
    cout << B - A << endl;
  else
    cout << B - A - 1 << endl;
  return 0;
}