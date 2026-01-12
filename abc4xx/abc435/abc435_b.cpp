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

  int ans = 0;
  rep(i, N) for (int j = i + 1; j < N; j++) {
    int sum = 0;
    for (int k = i; k <= j; k++) sum += A[k];

    bool flg = true;
    for (int k = i; k <= j; k++)
      if (sum % A[k] == 0) flg = false;
    if (flg) ans++;
  }

  cout << ans << endl;
  return 0;
}