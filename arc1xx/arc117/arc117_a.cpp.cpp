#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int calc = 0;
  for (int i = min(A, B); i <= max(A, B); i++) calc += i;

  if (A > B) {
    rep(i, A) cout << i + 1 << " ";
    rep(i, B - 1) cout << -(i + 1) << " ";
    cout << -calc;
  } else if (A < B) {
    rep(i, A - 1) cout << i + 1 << " ";
    rep(i, B) cout << -(i + 1) << " ";
    cout << calc;
  } else {
    rep(i, A) cout << i + 1 << " ";
    rep(i, B) cout << -(i + 1) << " ";
  }
  return 0;
}