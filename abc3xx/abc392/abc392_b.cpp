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
  rep(i, M) cin >> A[i];
  sort(A.begin(), A.end());

  cout << N - M << endl;
  int idx = 0;
  rep(i, N) {
    if (A[idx] != i + 1)
      cout << i + 1 << " ";
    else
      idx++;
  }
  cout << endl;
  return 0;
}