#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  rep(i, N) cin >> S[i];

  int calc = 0;
  vector<int> ans(N);
  ans[0] = S[0];
  rep(i, N - 1) ans[i + 1] = S[i + 1] - S[i];

  rep(i, N) cout << ans[i] << " ";
  cout << endl;
  return 0;
}