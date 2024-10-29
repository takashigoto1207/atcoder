#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;

  if (2 * k <= n)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}