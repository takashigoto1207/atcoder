#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  int ans = 0;
  while (N > 0) {
    N /= K;
    ans++;
  }
  cout << ans << endl;
  return 0;
}