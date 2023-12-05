#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, X, Y;
  cin >> N >> K >> X >> Y;
  if (N <= K)
    cout << N * X << endl;
  else
    cout << K * X + (N - K) * Y << endl;
  return 0;
}