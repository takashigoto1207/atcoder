#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  string S;
  cin >> N >> Q >> S;

  vector<int> cnt(N);
  cnt[0] = 0;
  for (int i = 1; i < N; i++)
    cnt[i] = cnt[i - 1] + (S[i - 1] == 'A' && S[i] == 'C');

  int l, r;
  vector<int> ans(Q);
  rep(i, Q) {
    cin >> l >> r;
    ans[i] = cnt[r - 1] - cnt[l - 1];
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}