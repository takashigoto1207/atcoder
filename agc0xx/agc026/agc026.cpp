#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int ans = 0, cnt = 1;
  for (int i = 1; i < N; i++) {
    if (a[i - 1] == a[i])
      cnt++;
    else {
      ans += cnt / 2;
      cnt = 1;
    }
  }
  ans += cnt / 2;
  cout << ans << endl;
  return 0;
}