#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> r(N);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    r[A].emplace_back(B);
    r[B].emplace_back(A);
  }

  rep(i, N) sort(r[i].begin(), r[i].end());
  rep(i, N) {
    cout << r[i].size() << " ";
    rep(j, r[i].size()) cout << r[i][j] + 1 << " ";
    cout << endl;
  }
  return 0;
}