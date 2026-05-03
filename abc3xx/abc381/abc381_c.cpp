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

  int ans = 0;
  rep(i, N) {
    if (S[i] != '/') continue;
    int d = 0;
    while (true) {
      int j = i - (d + 1);
      int k = i + (d + 1);
      if (!(0 <= j and j < N)) break;
      if (!(0 <= k and k < N)) break;
      if (S[j] != '1') break;
      if (S[k] != '2') break;
      d++;
    }
    ans = max(ans, 1 + d * 2);
  }
  cout << ans << endl;
  return 0;
}