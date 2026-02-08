#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int calc = 0;
    rep(j, to_string(i).size()) calc += to_string(i)[j] - '0';
    if (calc == K) ans++;
  }

  cout << ans << endl;
  return 0;
}