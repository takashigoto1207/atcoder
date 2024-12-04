#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<ll> c(n + 1);
  c[0] = 1;
  c[1] = 1;
  for (int i = 2; i <= n; i++) {
    c[i] = c[i - 1] + c[i - 2];
  }
  cout << c[n] << endl;
  return 0;
}