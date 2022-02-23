#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  if ((a + 1) % 10 == b % 10 || (b + 1) % 10 == a % 10)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}