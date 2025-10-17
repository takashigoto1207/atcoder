#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N - K) {
    if (A[i] < A[i + K])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}