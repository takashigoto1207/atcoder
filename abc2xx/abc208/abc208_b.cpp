#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int P;
  cin >> P;

  vector<int> coin(10, 1);
  rep(i, 9) coin[i + 1] = coin[i] * (i + 2);

  int ans = 0;
  for (int i = 9; i >= 0; i--) {
    ans += P / coin[i];
    P %= coin[i];
  }
  cout << ans << endl;
  return 0;
}