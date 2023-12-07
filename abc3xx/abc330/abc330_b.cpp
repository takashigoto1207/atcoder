#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N) cout << clamp(A[i], L, R) << " ";
  cout << endl;
  return 0;
}