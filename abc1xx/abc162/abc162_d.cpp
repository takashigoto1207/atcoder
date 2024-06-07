#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  ll r = 0, g = 0, b = 0;
  rep(i, N) {
    if (S[i] == 'R') r++;
    if (S[i] == 'G') g++;
    if (S[i] == 'B') b++;
  }
  ll ans = r * g * b;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      if (2 * j - i < N && S[i] != S[j] && S[j] != S[2 * j - i] &&
          S[2 * j - i] != S[i])
        ans--;
    }
  }
  cout << ans << endl;
  return 0;
}