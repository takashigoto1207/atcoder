#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, C;
  cin >> A >> B >> C;

  if (A % 2 == 0 || B % 2 == 0 || C % 2 == 0)
    cout << 0 << endl;
  else
    cout << min({A * B, B * C, C * A}) << endl;
  return 0;
}