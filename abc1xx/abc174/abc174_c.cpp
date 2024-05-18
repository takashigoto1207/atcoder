#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K;
  cin >> K;

  int ans = 1;
  ll calc = 7;

  while (calc % K && ans <= K) {
    calc = (calc * 10 + 7) % K;
    ans++;
  }
  if (ans == K + 1)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}