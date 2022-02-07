#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> cut;
  cut.push_back(0);
  cut.push_back(360);
  int calc = 0;
  rep(i, N) calc += A[i], cut.push_back(calc % 360);
  sort(cut.begin(), cut.end());

  int ans = 0;
  rep(i, N + 1) ans = max(ans, cut[i + 1] - cut[i]);
  cout << ans << endl;
  return 0;
}