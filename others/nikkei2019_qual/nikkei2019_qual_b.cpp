#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string A, B, C;
  cin >> N >> A >> B >> C;
  int ans = 0;
  rep(i, N) {
    if (A[i] != B[i] && B[i] != C[i] && C[i] != A[i])
      ans += 2;
    else if (A[i] != B[i] || B[i] != C[i] || C[i] != A[i])
      ans++;
  }
  cout << ans << endl;
  return 0;
}