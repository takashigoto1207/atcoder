#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K;
  cin >> K;

  ll ans = 0;
  for (int a = 1; a <= K; a++)
    for (int b = 1; b <= K / a; b++) ans += K / a / b;

  cout << ans << endl;
  return 0;
}