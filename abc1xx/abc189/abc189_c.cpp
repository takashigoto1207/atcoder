#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0;

  rep(i, N) {
    int calc = 0;
    int m = INT_MAX;
    for (int j = i; j < N; j++) {
      m = min(m, A[j]);
      calc = max(calc, m * (j - i + 1));
    }
    ans = max(ans, calc);
  }
  cout << ans << endl;
  return 0;
}