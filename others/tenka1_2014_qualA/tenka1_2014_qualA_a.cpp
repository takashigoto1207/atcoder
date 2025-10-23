#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> x(1000);

  rep(i, 1000) x[i] = to_string(i + 1);
  sort(x.begin(), x.end());

  rep(i, 1000) cout << x[i] << endl;
  return 0;
}