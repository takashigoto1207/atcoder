#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  string S;
  cin >> N >> X >> S;

  int ans = X;
  rep(i, N) {
    if (S[i] == 'o')
      ans++;
    else
      ans = max(0, ans - 1);
  }
  cout << ans << endl;
  return 0;
}