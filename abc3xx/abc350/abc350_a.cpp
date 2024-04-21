#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char x;
  int a;
  cin >> x >> x >> x >> a;
  if (a >= 1 && a <= 315 || a >= 317 && a <= 349)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}