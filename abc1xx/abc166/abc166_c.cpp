#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> H(N + 1), ma(N + 1);
  rep(i, N) {
    cin >> H[i + 1];
    ma[i + 1] = 0;
  }

  rep(i, M) {
    int A, B;
    cin >> A >> B;
    ma[A] = max(ma[A], H[B]);
    ma[B] = max(ma[B], H[A]);
  }

  int ans = 0;
  for (int i = 1; i <= N; i++)
    if (H[i] > ma[i]) ans++;
  cout << ans << endl;
  return 0;
}