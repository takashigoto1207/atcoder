#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char p, q;
  cin >> p >> q;

  int e[] = {0, 3, 4, 8, 9, 14, 23};
  cout << abs(e[p - 'A'] - e[q - 'A']) << endl;
  return 0;
}