#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  rep(i, N) ans += pow(-1, i + 1) * pow(i + 1, 3);

  cout << ans << endl;
  return 0;
}