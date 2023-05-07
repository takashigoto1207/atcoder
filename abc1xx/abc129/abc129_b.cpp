#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> W(N);
  int sum = 0;

  rep(i, N) {
    cin >> W[i];
    sum += W[i];
  }

  int ans = INT_MAX;
  int S1 = 0;
  rep(i, N) {
    S1 += W[i];
    ans = min(ans, abs(S1 - (sum - S1)));
  }

  cout << ans << endl;
  return 0;
}