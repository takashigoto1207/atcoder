#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  if (x == y)
    cout << x << endl;
  else
    cout << 3 - x - y << endl;
  return 0;
}