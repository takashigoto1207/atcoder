#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H), T(H);
  rep(i, H) cin >> S[i];
  rep(i, H) cin >> T[i];

  vector<string> Ts(W), Tt(W);
  rep(i, H) {
    rep(j, W) {
      Ts[j].push_back(S[i][j]);
      Tt[j].push_back(T[i][j]);
    }
  }

  sort(Ts.begin(), Ts.end());
  sort(Tt.begin(), Tt.end());
  if (Ts == Tt)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}