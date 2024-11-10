#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, cnt = 0, ans = 0;
  string S;
  cin >> N >> K >> S;

  rep(i, N) {
    if (S[i] == 'O')
      cnt++;
    else if (S[i] == 'X')
      cnt = 0;
    if (cnt >= K) ans++, cnt -= K;
  }

  cout << ans << endl;
  return 0;
}