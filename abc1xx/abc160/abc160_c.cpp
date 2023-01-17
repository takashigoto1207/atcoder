#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K, N;
  cin >> K >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int md = A[0] + K - A[N - 1];
  for (int i = 1; i < N; i++) md = max(md, A[i] - A[i - 1]);
  cout << K - md << endl;
  return 0;
}