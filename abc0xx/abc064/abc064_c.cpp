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

  rep(i, N) {
    cin >> a;
    if (a >= 3200) a = 3200;
    mp[a / 400]++;
  }

  int ans1 = 0;
  int ans2 = 0;
  rep(i, 8) if (mp[i] > 0) ans1++;
  ans2 = ans1 + mp[8];
  cout << max(1, ans1) << " " << ans2 << endl;
  return 0;
}