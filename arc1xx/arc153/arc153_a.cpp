#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans[6];
  N = N + 100000 - 1;
  for (int i = 5; 0 <= i; i--) {
    ans[i] = N % 10;
    N /= 10;
  }
  cout << ans[0] << ans[0] << ans[1] << ans[2] << ans[3] << ans[3] << ans[4]
       << ans[5] << ans[4];
  return 0;
}