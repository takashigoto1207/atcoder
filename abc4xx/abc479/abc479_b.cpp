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

  int ans = 0, calc = 0;
  rep(i, N) {
    if (S[i] == 'R') {
      calc++;
      ans = max(ans, calc);
    } else {
      calc = 0;
    }
  }
  cout << ans << endl;
  return 0;
}