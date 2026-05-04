#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<ll>> A(N, vector<ll>(N));
  rep(i, N) for (int j = i + 1; j < N; j++) cin >> A[i][j];

  rep(i, N) for (int j = i + 1; j < N;
                 j++) for (int k = i + 1; k < j;
                           k++) if (A[i][j] > A[i][k] + A[k][j]) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}