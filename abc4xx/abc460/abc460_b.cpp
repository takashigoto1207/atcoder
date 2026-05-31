#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T;
  cin >> T;

  ll X1, Y1, R1, X2, Y2, R2;
  vector<string> ans(T);
  rep(i, T) {
    cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
    if ((R1 - R2) * (R1 - R2) <=
            (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2) &&
        (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2) <= (R1 + R2) * (R1 + R2))
      ans[i] = "Yes";
    else
      ans[i] = "No";
  }
  rep(i, T) cout << ans[i] << endl;
  return 0;
}