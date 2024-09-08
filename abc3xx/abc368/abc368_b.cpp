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
  while (true) {
    sort(A.rbegin(), A.rend());
    if (A[0] == 0 or A[1] == 0) break;
    A[0] -= 1, A[1] -= 1;
    ans++;
  }

  cout << ans << endl;
  return 0;
}