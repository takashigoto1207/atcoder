#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (A + B + 1 >= C)
    cout << B + C << endl;
  else
    cout << B + (A + B + 1) << endl;
  return 0;
}