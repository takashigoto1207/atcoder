#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 1;
  rep(i, A - B) ans *= 32;
  cout << ans << endl;
  return 0;
}