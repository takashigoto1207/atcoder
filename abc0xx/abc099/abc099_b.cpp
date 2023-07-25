#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  cout << (b - a) * (b - a + 1) / 2 - b << endl;
  return 0;
}