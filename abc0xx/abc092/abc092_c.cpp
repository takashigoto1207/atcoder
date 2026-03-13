#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 2);
  rep(i, N) cin >> A[i + 1];

  ll calc = 0;
  rep(i, N + 1) calc += abs(A[i + 1] - A[i]);

  rep(i, N) cout << calc + abs(A[i + 2] - A[i]) - abs(A[i + 2] - A[i + 1]) -
                        abs(A[i + 1] - A[i])
                 << endl;
  return 0;
}