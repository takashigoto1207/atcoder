#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, X;
  cin >> N >> K >> X;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N) {
    if (i == (K - 1))
      cout << A[i] << " " << X << " ";
    else
      cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}