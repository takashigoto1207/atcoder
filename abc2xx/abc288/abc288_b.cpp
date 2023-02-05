#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<string> ans(K);
  rep(i, N) {
    string S;
    cin >> S;
    if (i < K) ans[i] = S;
  }
  sort(ans.begin(), ans.end());
  rep(i, K) cout << ans[i] << endl;
  return 0;
}