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

  ll ans = 0, cnt = 0;
  rep(i, N) {
    if (S[i] == '>')
      cnt++;
    else {
      ans += cnt * (cnt + 1) / 2;
      cnt = 0;
    }
  }
  ans += cnt * (cnt + 1) / 2;
  cout << ans << endl;
  return 0;
}