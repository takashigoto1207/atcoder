#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N), B(K);
  rep(i, N) cin >> A[i];
  rep(i, K) cin >> B[i];

  int tmp = -1;
  rep(i, N) tmp = max(tmp, A[i]);
  rep(i, K) {
    if (A[B[i] - 1] == tmp) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}