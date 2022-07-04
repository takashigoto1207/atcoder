#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N) {
    string S;
    cin >> S;
    rep(j, N) A[i][j] = S[j] - '0';
  }

  ll ans = 0;
  rep(qi, N) rep(qj, N) rep(v, 8) {
    int i = qi, j = qj;
    ll calc = 0;
    rep(k, N) {
      calc = calc * 10 + A[i][j];
      i = (i + di[v] + N) % N;
      j = (j + dj[v] + N) % N;
    }
    ans = max(ans, calc);
  }
  cout << ans << endl;
  return 0;
}