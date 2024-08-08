#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll calc = 0;
  rep(i, N) calc += A[i];
  if (calc <= M) {
    cout << "infinite" << endl;
    return 0;
  }

  int ok = 0, ng = INT_MAX;
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) >> 1;
    calc = 0;
    rep(i, N) calc += min(mid, A[i]);
    if (calc <= M)
      ok = mid;
    else
      ng = mid;
  }
  cout << ok << endl;
  return 0;
}