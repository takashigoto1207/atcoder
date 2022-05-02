#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> T(N);
  vector<vector<int>> A(N);
  rep(i, N) {
    int K;
    cin >> T[i] >> K;
    A[i] = vector<int>(K);
    rep(j, K) {
      cin >> A[i][j];
      A[i][j]--;
    }
  }

  vector<bool> need(N);
  need[N - 1] = true;
  for (int i = N - 1; i >= 0; i--) {
    if (need[i])
      for (int j : A[i]) need[j] = true;
  }
  ll ans = 0;
  rep(i, N) if (need[i]) ans += T[i];
  cout << ans << endl;
  return 0;
}