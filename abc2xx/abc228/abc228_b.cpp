#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0;
  vector<bool> b(N, false);
  while (!b[X - 1]) {
    b[X - 1] = true;
    X = A[X - 1];
    ans++;
  }

  cout << ans << endl;
  return 0;
}