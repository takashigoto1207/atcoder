#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, x;
  cin >> n >> x;

  cout << min(x - 1, n - x) << endl;
  return 0;
}