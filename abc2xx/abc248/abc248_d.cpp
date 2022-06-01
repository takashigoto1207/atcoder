#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<vector<int>> is(N + 1);
  rep(i, N) is[A[i]].push_back(i);

  int Q;
  cin >> Q;
  vector<int> ans(Q);
  rep(i, Q) {
    int L, R, X;
    cin >> L >> R >> X;
    L--, R--;
    auto f = [&](vector<int>& is, int R) {
      return upper_bound(is.begin(), is.end(), R) - is.begin();
    };
    ans[i] = f(is[X], R) - f(is[X], L - 1);
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}