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

  rep(i, N - 1) {
    if (A[i + 1] == A[i])
      cout << "stay" << endl;
    else if (A[i + 1] < A[i])
      cout << "down " << A[i] - A[i + 1] << endl;
    else
      cout << "up " << A[i + 1] - A[i] << endl;
  }
  return 0;
}