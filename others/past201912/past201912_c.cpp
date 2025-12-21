#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> x(6);
  rep(i, 6) cin >> x[i];

  sort(x.rbegin(), x.rend());
  cout << x[2] << endl;
  return 0;
}