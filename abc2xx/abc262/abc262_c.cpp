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
  int same = 0;

  rep(i, N) {
    cin >> a[i];
    a[i]--;
    if (a[i] == i) same += 1;
  }

  ll ans = (ll)same * (same - 1) / 2;
  rep(i, N) {
    if (a[i] > i and a[a[i]] == i) ans++;
  }
  cout << ans << endl;
  return 0;
}