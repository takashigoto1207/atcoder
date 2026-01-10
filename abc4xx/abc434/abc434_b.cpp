#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  double A, B;
  vector<double> n(M + 1, 0), weight(M + 1);
  rep(i, N) {
    cin >> A >> B;
    n[A]++;
    weight[A] += B;
  }

  rep(i, M) cout << setprecision(10) << weight[i + 1] / n[i + 1] << endl;
  return 0;
}