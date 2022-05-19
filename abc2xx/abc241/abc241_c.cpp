#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  const int di[] = {0, 1, 1, -1};
  const int dj[] = {1, 0, 1, 1};

  rep(i, N) rep(j, N) rep(k, 4) {
    int ni = i, nj = j;
    int cnt = 0;
    rep(x, 6) {
      if (ni < 0 || nj < 0 || N <= ni || N <= nj) {
        cnt = 999;
        break;
      }
      if (S[ni][nj] == '.') cnt++;
      ni += di[k], nj += dj[k];
    }
    if (cnt <= 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}