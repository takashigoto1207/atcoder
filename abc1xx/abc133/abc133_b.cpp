#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  rep(i, N) rep(j, D) cin >> X[i][j];

  set<int> st;
  for (int i = 1; i <= 200; i++) st.insert(i * i);

  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      int calc = 0;
      rep(k, D) calc += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
      if (st.count(calc)) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}