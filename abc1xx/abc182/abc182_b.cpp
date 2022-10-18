#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0, mem = 0;
  for (int i = 2; i <= 1000; i++) {
    int cnt = 0;
    rep(j, N) if (A[j] % i == 0) cnt++;
    if (mem <= cnt) ans = i, mem = cnt;
  }
  cout << ans << endl;
  return 0;
}