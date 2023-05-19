#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int max_h = INT_MIN;
  int H;
  int ans = 0;
  rep(i, N) {
    cin >> H;
    max_h = max(max_h, H);
    if (H >= max_h) ans++;
  }
  cout << ans << endl;
  return 0;
}