#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (max({a, b, c}) * 2 == a + b + c)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}