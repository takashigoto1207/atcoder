#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  double ans;
  double A;
  rep(i, N) {
    cin >> A;
    ans += (double)1 / A;
  }
  cout << setprecision(10) << 1 / ans << endl;
  return 0;
}