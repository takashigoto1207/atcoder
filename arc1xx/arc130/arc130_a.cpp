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

  ll ans = 0, cnt = 1;
  rep(i, N - 1) {
    if (S[i] == S[i + 1])
      cnt++;
    else {
      ans += cnt * (cnt - 1) / 2;
      cnt = 1;
    }
  }
  ans += cnt * (cnt - 1) / 2;
  cout << ans << endl;
  return 0;
}