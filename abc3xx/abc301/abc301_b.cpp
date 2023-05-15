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

  cout << A[0];
  rep(i, N - 1) {
    for (int j = A[i] + 1; j <= A[i + 1]; j++) cout << " " << j;
    for (int j = A[i] - 1; j >= A[i + 1]; j--) cout << " " << j;
  }
  cout << endl;
  return 0;
}