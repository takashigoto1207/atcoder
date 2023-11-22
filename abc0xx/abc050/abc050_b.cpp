#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int sum = 0;
  vector<int> T(N);
  rep(i, N) {
    cin >> T[i];
    sum += T[i];
  }

  int M;
  cin >> M;
  vector<int> P(M);
  vector<int> X(M);
  rep(i, M) cin >> P[i] >> X[i];

  rep(i, M) cout << sum - (T[P[i] - 1] - X[i]) << endl;
  return 0;
}