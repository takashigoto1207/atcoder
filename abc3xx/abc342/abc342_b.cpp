#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int p;
  vector<int> L(N);
  rep(i, N) {
    cin >> p;
    L[p - 1] = i;
  }

  int Q, A, B;
  cin >> Q;
  vector<int> ans(Q);
  rep(i, Q) {
    cin >> A >> B;
    if (L[A - 1] < L[B - 1])
      ans[i] = A;
    else
      ans[i] = B;
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}