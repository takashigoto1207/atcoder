#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (X % Y == 0)
    cout << -1 << endl;
  else
    cout << X << endl;
  return 0;
}