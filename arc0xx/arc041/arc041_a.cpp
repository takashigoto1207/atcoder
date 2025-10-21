#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x, y, k;
  cin >> x >> y >> k;

  if (k <= y)
    cout << x + k << endl;
  else
    cout << x + y - (k - y) << endl;
  return 0;
}