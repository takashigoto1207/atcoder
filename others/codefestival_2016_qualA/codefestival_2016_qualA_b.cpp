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
  rep(i, N) cin >> a[i];

  int ans = 0;
  rep(i, N) if (i == a[a[i] - 1] - 1) ans++;
  cout << ans / 2 << endl;
  return 0;
}