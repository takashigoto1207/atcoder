#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, ans = 0;
  cin >> N;

  rep(i, N - 1) cin >> A, ans -= A;
  cout << ans << endl;
  return 0;
}