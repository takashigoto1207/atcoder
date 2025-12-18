#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  vector<unsigned> C(N + M);
  merge(begin(A), end(A), begin(B), end(B), begin(C));
  for (const auto a : A)
    cout << lower_bound(begin(C), end(C), a) - begin(C) + 1 << " ";
  cout << endl;
  for (const auto b : B)
    cout << lower_bound(begin(C), end(C), b) - begin(C) + 1 << " ";
  cout << endl;
  return 0;
}