#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X;
  cin >> X;

  if (X == 3 || X == 5 || X == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}