#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, mA = -INT_MAX, B, mB = -INT_MAX;
  cin >> N;

  rep(i, N) cin >> A, mA = max(mA, A);
  rep(i, N) cin >> B, mB = max(mB, B);
  cout << mA + mB << endl;
  return 0;
}