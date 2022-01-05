#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> X(N), Y(N);
  rep(i, N) cin >> X[i] >> Y[i];

  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        if ((Y[k] - Y[j]) * (X[j] - X[i]) != (X[k] - X[j]) * (Y[j] - Y[i]))
          ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}