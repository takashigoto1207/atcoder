#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, V;
  cin >> N >> V;

  vector<int> W(N);
  rep(i, N) cin >> W[i];

  int ans = 0, calc = 0;
  rep(i, N) for (int j = i + 1; j < N; j++) for (int k = j + 1; k < N; k++) {
    if (i + j + k + 3 > V) continue;
    calc = W[i] + W[j] + W[k];
    ans = max(ans, calc);
  }
  cout << ans << endl;
  return 0;
}