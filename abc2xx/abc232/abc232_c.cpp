#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector ga(N, vector<int>(N, 0));
  vector gb(N, vector<int>(N, 0));
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    ga[A][B] = ga[B][A] = 1;
  }
  rep(i, M) {
    int C, D;
    cin >> C >> D;
    C--, D--;
    gb[C][D] = gb[D][C] = 1;
  }
  vector<int> p(N);
  rep(i, N) p[i] = i;
  do {
    vector g(N, vector<int>(N, 0));
    rep(i, N) rep(j, N) g[i][j] = ga[p[i]][p[j]];
    if (g == gb) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << "No" << endl;
  return 0;
}