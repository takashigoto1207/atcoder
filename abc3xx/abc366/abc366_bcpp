#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int M = 0;
  rep(i, N) M = max(M, (int)S[i].size());
  vector<string> T(M, string(N, '*'));

  rep(i, N) rep(j, (int)S[i].size()) T[j][N - i - 1] = S[i][j];
  rep(i, M) while (T[i].back() == '*') T[i].pop_back();
  rep(i, M) cout << T[i] << endl;
  return 0;
}