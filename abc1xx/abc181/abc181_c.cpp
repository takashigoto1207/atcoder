#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(N);
  vector<int> y(N);
  rep(i, N) cin >> x[i] >> y[i];

  rep(i, N) {
    rep(j, i) {
      rep(k, j) {
        if ((x[k] - x[i]) * (y[j] - y[i]) == (y[k] - y[i]) * (x[j] - x[i])) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}