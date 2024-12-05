#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  for (int i = 1; i <= 127; i++)
    if (i % 3 == a && i % 5 == b && i % 7 == c) cout << i << endl;
  return 0;
}