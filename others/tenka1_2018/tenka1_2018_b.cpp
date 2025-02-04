#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  rep(i, K) {
    if (i % 2 == 0) {
      B += A / 2;
      A /= 2;
    } else {
      A += B / 2;
      B /= 2;
    }
  }
  cout << A << " " << B << endl;
  return 0;
}