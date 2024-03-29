#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M), B(M);
  rep(i, M) cin >> A[i] >> B[i];

  int K;
  cin >> K;
  vector<int> C(K), D(K);
  rep(i, K) cin >> C[i] >> D[i];

  int ans = 0;

  rep(i, 1 << K) {
    vector<int> dish(N + 1);
    rep(j, K) {
      int a = i >> j & 1;
      if (a == 0)
        dish[C[j]] = 1;
      else
        dish[D[j]] = 1;
    }
    int cnt = 0;
    rep(j, M) if (dish[A[j]] == 1 && dish[B[j]] == 1) cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}