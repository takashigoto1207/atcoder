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

  rep(i, N) {
    int ans = -1;
    for (int j = 0; j < i; j++)
      if (A[j] > A[i]) ans = j + 1;
    cout << ans << endl;
  }
  return 0;
}