#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;
  cout << max(0, (Y - X) / 10 + min(1, (Y - X) % 10)) << endl;
  return 0;
}