#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  cout << min({abs(b - a), 10 + a - b, 10 + b - a}) << endl;
  return 0;
}