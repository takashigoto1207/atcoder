#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  rep(i, N) cin >> H[i];

  int ans = 0, calc = 0;
  while (calc + H[ans] <= M && ans < N) calc += H[ans], ans++;
  cout << ans << endl;
  return 0;
}