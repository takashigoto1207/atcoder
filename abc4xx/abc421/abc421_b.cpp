#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<ll> x(10);
  cin >> x[0] >> x[1];

  for (int i = 2; i < 10; i++) {
    string str = to_string(x[i - 2] + x[i - 1]);
    reverse(str.begin(), str.end());
    x[i] = stoll(str);
  }
  cout << x[9] << endl;
  return 0;
}