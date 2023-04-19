#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> H(N);
  rep(i, N) cin >> H[i];

  int m = H[0];
  for (int i = 1; i < N; i++) {
    if (m - 1 > H[i]) {
      cout << "No" << endl;
      return 0;
    } else {
      m = max(m, H[i]);
    }
  }
  cout << "Yes" << endl;
  return 0;
}