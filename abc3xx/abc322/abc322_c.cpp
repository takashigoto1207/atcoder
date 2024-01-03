#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  rep(i, M) cin >> A[i], A[i]--;

  rep(i, N) {
    int x = *lower_bound(A.begin(), A.end(), i);
    cout << x - i << endl;
  }
  return 0;
}