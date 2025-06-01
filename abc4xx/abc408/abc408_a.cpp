#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, S;
  cin >> N >> S;

  vector<int> T(N + 1, 0);
  rep(i, N) cin >> T[i + 1];

  rep(i, N) if (S < T[i + 1] - T[i]) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}