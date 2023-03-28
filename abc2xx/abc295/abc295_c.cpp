#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A;
  cin >> N;

  map<int, int> mp;
  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  int ans = 0;
  for (auto x : mp) ans += x.second / 2;
  cout << ans << endl;
  return 0;
}