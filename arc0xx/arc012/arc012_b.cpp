#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  double va, vb, L;
  cin >> N >> va >> vb >> L;

  double ans = L;
  rep(i, N) ans *= (vb / va);
  cout << setprecision(10) << ans << endl;
  return 0;
}