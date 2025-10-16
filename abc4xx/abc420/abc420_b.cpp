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

  vector<int> score(N, 0);

  rep(i, M) {
    int x = 0, y = 0;
    rep(j, N) {
      if (S[j][i] == '0')
        x++;
      else
        y++;
    }

    rep(j, N) {
      if (x < y && S[j][i] == '0') score[j]++;
      if (x > y && S[j][i] == '1') score[j]++;
    }
  }

  int top = -1;
  rep(i, N) top = max(top, score[i]);
  rep(i, N) if (top == score[i]) cout << i + 1 << " ";
  cout << endl;
  return 0;
}