#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int ans = 0;
  rep(i, N) {
    int C;
    cin >> C;
    if (A + B == C) ans = i + 1;
  }
  cout << ans << endl;
  return 0;
}