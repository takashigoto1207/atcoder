#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> cnt(S.size(), 0);
  if (S[0] == 't') cnt[0] = 1;
  rep(i, S.size() - 1) {
    if (S[i + 1] == 't')
      cnt[i + 1] = cnt[i] + 1;
    else
      cnt[i + 1] = cnt[i];
  }

  double ans = 0;
  rep(i, S.size()) rep(j, S.size()) {
    if (j - i >= 2 && S[j] == 't' && S[i] == 't')
      ans = max(ans, (double)(cnt[j] - cnt[i] - 1) / (double)(j - i - 1));
  }
  cout << setprecision(10) << ans << endl;
  return 0;
}