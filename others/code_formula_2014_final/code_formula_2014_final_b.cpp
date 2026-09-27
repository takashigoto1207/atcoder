#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  cout << n / 2 + n % 2 * 3 << endl;
  return 0;
}