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

  vector<int> cnt(N, 0), ans(Q, 0);
  for (int i = 1; i < S.size(); i++) {
    cnt[i] = cnt[i - 1];
    if (S[i] == S[i - 1]) cnt[i]++;
  }

  int l, r;
  rep(i, Q) {
    cin >> l >> r;
    ans[i] = cnt[r - 1] - cnt[l - 1];
  }
  rep(i, Q) cout << ans[i] << endl;
  return 0;
}