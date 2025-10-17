#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double txa, tya, txb, tyb, T, V, n;
  cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

  vector<double> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  rep(i, n) {
    if (sqrt((txa - x[i]) * (txa - x[i]) + (tya - y[i]) * (tya - y[i])) +
            sqrt((x[i] - txb) * (x[i] - txb) + (y[i] - tyb) * (y[i] - tyb)) <=
        T * V) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}