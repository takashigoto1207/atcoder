#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int A, K;
  map<int, int> mp;
  rep(i, N) {
    cin >> K;
    rep(j, K) {
      cin >> A;
      mp[A]++;
    }
  }

  int ans = 0;
  for (auto x : mp) {
    if (x.second == N) ans++;
  }
  cout << ans << endl;
  return 0;
}