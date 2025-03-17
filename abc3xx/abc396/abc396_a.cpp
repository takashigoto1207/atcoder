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

  string ans = "No";
  rep(i, N - 2) if (A[i] == A[i + 1] && A[i + 1] == A[i + 2]) {
    ans = "Yes";
    break;
  }
  cout << ans << endl;
  return 0;
}