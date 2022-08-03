#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector adj(N, vector<bool>(N));
  rep(i, M) {
    int U, V;
    cin >> U >> V;
    U--, V--;
    adj[U][V] = adj[V][U] = true;
  }
  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        if (adj[i][j] and adj[j][k] and adj[k][i]) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}