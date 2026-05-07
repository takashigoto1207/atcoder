#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  ll x;
  cin >> N >> x;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  sort(a.begin(), a.end());

  int ans = 0;
  while (x - a[ans] >= 0 && ans < N) x -= a[ans], ans++;
  if (ans == N && x != 0) ans--;
  cout << ans << endl;
  return 0;
}