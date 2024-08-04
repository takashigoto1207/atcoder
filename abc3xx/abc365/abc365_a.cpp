#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Y;
  cin >> Y;
  if (Y % 4)
    cout << 365 << endl;
  else if (Y % 100)
    cout << 366 << endl;
  else if (Y % 400)
    cout << 365 << endl;
  else
    cout << 366 << endl;
  return 0;
}