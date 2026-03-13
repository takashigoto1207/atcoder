#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, int> mp;
  int a;
  rep(i, N) cin >> a, mp[a]++;

  int ans = 0;
  rep(i, pow(10, 5)) ans = max(ans, mp[i] + mp[i + 1] + mp[i + 2]);
  cout << ans << endl;
  return 0;
}