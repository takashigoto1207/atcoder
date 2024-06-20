#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, R, S, P;
  string T;
  cin >> N >> K >> R >> S >> P >> T;

  int ans = 0;
  rep(i, N + 1) {
    if (K <= i && T[i] == T.at(i - K)) {
      T[i] = '-';
      continue;
    }

    if (T[i] == 's')
      ans += R;
    else if (T[i] == 'p')
      ans += S;
    else if (T[i] == 'r')
      ans += P;
  }
  cout << ans << endl;
  return 0;
}