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

  int a = 0, b = 0;
  rep(i, N) if (S[i] == 'R') a++;
  int ans = max(a, b);
  rep(i, N) {
    if (S[i] == 'R')
      a--;
    else
      b++;
    ans = min(ans, max(a, b));
  }
  cout << ans << endl;
  return 0;
}