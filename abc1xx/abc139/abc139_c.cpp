#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int H;
  int m = INT_MAX;
  int cnt = 0;
  int ans = 0;

  cin >> H;
  m = H;
  for (int i = 1; i < N; i++) {
    cin >> H;
    if (m >= H) {
      m = H;
      cnt++;
    } else {
      m = H;
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  ans = max(ans, cnt);
  cout << ans << endl;
  return 0;
}