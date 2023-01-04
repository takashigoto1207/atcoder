#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int A;
  int ans = N;
  rep(i, M) {
    cin >> A;
    ans -= A;
    if (ans < 0) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}