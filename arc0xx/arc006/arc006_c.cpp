#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> C(N, 0);

  int w;
  int ans = 0;
  rep(i, N) {
    cin >> w;
    rep(j, N) {
      if (w <= C[j]) {
        C[j] = w;
        break;
      }
      if (C[j] == 0) {
        C[j] = w;
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}