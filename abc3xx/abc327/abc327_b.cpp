#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll B;
  cin >> B;
  for (int A = 1; A <= 15; A++) {
    ll x = 1;
    rep(i, A) x *= A;
    if (x == B) {
      cout << A << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}