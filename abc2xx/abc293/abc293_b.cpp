#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1, 0);
  vector<bool> B(N + 1, false);

  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= N; i++)
    if (!B[i]) B[A[i]] = true;

  int ans = 0;
  for (int i = 1; i <= N; i++)
    if (!B[i]) ans++;
  cout << ans << endl;
  for (int i = 1; i <= N; i++)
    if (!B[i]) cout << i << " ";
  cout << endl;
  return 0;
}