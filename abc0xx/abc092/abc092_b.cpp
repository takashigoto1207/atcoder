#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D, X;
  cin >> N >> D >> X;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = X;
  rep(i, N) {
    int calc = 1;
    while (calc <= D) {
      calc += A[i];
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}