#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> H(N);
  rep(i, N) cin >> H[i];

  int ans = H[0];
  rep(i, N - 1) {
    if (H[i] < H[i + 1])
      ans = H[i + 1];
    else
      break;
  }
  cout << ans << endl;
  return 0;
}