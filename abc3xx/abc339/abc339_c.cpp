#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll calc = 0, x = 0;
  rep(i, N) calc += A[i], x = min(x, calc);

  cout << calc - x << endl;
  return 0;
}