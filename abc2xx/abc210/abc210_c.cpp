#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> c(N);
  rep(i, N) cin >> c[i];

  int ans = 0, cnt = 0;
  map<int, int> mp;
  rep(i, N) {
    if (mp[c[i]] == 0) cnt++;
    mp[c[i]]++;

    if (i >= K) {
      mp[c[i - K]]--;
      if (mp[c[i - K]] == 0) cnt--;
    }

    ans = max(ans, cnt);
  }

  cout << ans << endl;
  return 0;
}