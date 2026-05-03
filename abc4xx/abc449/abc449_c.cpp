#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, R;
  string S;
  cin >> N >> L >> R >> S;

  ll ans = 0;
  map<char, int> mp;
  rep(i, N) {
    if (i - L >= 0) mp[S[i - L]]++;
    if (i - R - 1 >= 0) mp[S[i - R - 1]]--;
    ans += mp[S[i]];
  }
  cout << ans << endl;
  return 0;
}