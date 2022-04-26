#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int ans = 0;
  rep(i, 1 << N) {
    int cnt = 0;
    map<char, int> mp;
    rep(j, N) if (i >> j & 1) for (char c : S[j]) mp[c]++;

    for (auto x : mp)
      if (x.second == K) cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}