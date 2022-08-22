#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  ll T;
  cin >> N >> M >> T;

  vector<int> A(N - 1);
  rep(i, N - 1) cin >> A[i];

  vector<int> B(N, 0);
  rep(i, M) {
    int X, Y;
    cin >> X >> Y;
    B[X - 1] = Y;
  }

  rep(i, N - 1) {
    T -= A[i];
    T += B[i];
    if (T <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}