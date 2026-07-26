#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int M, D;
  string S;
  cin >> M >> D >> S;

  vector<bool> guard(M, false);
  rep(i, M) {
    if (S[i] == 'G') {
      rep(j, D) guard[max(0, i - j - 1)] = true;
      guard[i] = true;
      rep(j, D) guard[min(M - 1, i + j + 1)] = true;
    }
  }

  int ans = 0;
  rep(i, M) if (!guard[i]) ans++;
  cout << ans << endl;
  return 0;
}