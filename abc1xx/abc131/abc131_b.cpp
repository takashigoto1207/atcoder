#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L;
  cin >> N >> L;

  int eat = INT_MAX;
  int ans = 0;
  rep(i, N) {
    ans += (L + i);
    if (abs(eat) > abs(L + i)) eat = L + i;
  }
  cout << ans - eat << endl;
  return 0;
}