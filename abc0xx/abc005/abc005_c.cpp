#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T, N, M;
  cin >> T >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  cin >> M;
  vector<int> B(M);
  rep(i, M) cin >> B[i];

  int t = 0, c = 0;
  while (t < N && c < M) {
    if (A[t] <= B[c] && B[c] <= A[t] + T) c++;
    t++;
  }

  if (t <= N && c == M)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}