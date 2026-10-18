#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  vector<int> ans(N);
  rep(j, M) {
    string T;
    cin >> T;

    {
      int x = -1;
      rep(i, N) if (S[i] == T) x = i;
      if (x != -1) {
        ans[x]++;
        continue;
      }
    }

    int x = -1, cnt = 0;
    rep(i, N) {
      if (S[i].size() != T.size()) continue;
      int dist = 0;
      rep(k, T.size()) if (S[i][k] != T[k]) dist++;
      if (dist == 1) cnt++, x = i;
    }
    if (cnt > 1) continue;
    if (cnt == 1) ans[x]++;
  }

  rep(i, N) cout << ans[i] << endl;
  return 0;
}