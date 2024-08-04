#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> B = A;
  sort(B.begin(), B.end());

  int x = B[N - 2];
  rep(i, N) if (A[i] == x) cout << i + 1 << endl;
  return 0;
}