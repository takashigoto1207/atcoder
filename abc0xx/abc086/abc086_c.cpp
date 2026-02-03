#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> t(N + 1, 0), x(N + 1, 0), y(N + 1, 0);
  rep(i, N) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
  rep(i, N) {
    if (abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]) > t[i + 1] - t[i] ||
        (t[i + 1] - t[i] - abs(x[i + 1] - x[i]) - abs(y[i + 1] - y[i])) % 2 !=
            0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}