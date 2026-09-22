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

  sort(S.begin(), S.end());
  do {
    bool flg = true;
    rep(i, N - 1) {
      int cnt = 0;
      rep(j, M) {
        if (S[i][j] != S[i + 1][j]) cnt++;
      }
      if (cnt != 1) flg = false;
    }
    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));
  cout << "No" << endl;
  return 0;
}