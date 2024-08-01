#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, T, P;
  cin >> N >> T >> P;

  vector<int> L(N);
  rep(i, N) cin >> L[i];

  rep(i, T) {
    int cnt = 0;
    rep(j, N) if (T <= L[j] + i) cnt++;
    if (P <= cnt) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}