#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, a, X, Y;
  cin >> N;
  vector<vector<int>> A(N);
  rep(i, N) {
    cin >> L;
    rep(j, L) cin >> a, A[i].push_back(a);
  }
  cin >> X >> Y;
  cout << A[X - 1][Y - 1] << endl;
  return 0;
}