#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a + b + c - min({a, b, c}) - max({a, b, c}) == b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}