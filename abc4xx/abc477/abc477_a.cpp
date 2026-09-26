#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char c;
  cin >> c;

  if (c == 'B')
    cout << 'Y' << endl;
  else if (c == 'R')
    cout << 'B' << endl;
  else if (c == 'Y')
    cout << 'R' << endl;
  return 0;
}