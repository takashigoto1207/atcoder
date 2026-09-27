#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, x;
  cin >> n >> x;

  cout << (n - x) * 525 + x * 540 << endl;
  return 0;
}