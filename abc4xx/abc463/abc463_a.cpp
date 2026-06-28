#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (X * 9 == Y * 16)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}