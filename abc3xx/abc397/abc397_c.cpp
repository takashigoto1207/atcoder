#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> numl(N + 1), numr(N + 1);
  set<int> stl, str;

  rep(i, N) stl.insert(A[i]), numl[i + 1] = stl.size();
  for (int i = N - 1; i >= 0; i--) str.insert(A[i]), numr[i] = str.size();

  int ans = 0;
  for (int i = 1; i < N; i++) ans = max(ans, numr[i] + numl[i]);
  cout << ans << endl;
  return 0;
}