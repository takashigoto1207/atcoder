#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N - K) cout << A[K + i] << " ";
  rep(i, min(N, K)) cout << 0 << " ";
  cout << endl;
  return 0;
}