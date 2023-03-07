#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> cnt(N);
  for (int i = 1; i <= N - 1; i++) {
    for (int j = 1; j * j <= i + 1; j++) {
      if (i % j == 0) {
        cnt[i]++;
        if (j * j != i) cnt[i]++;
      }
    }
  }

  ll ans = 0;
  for (int i = 1; i <= N; i++) ans += cnt[i] * cnt[N - i];
  cout << ans << endl;
  return 0;
}