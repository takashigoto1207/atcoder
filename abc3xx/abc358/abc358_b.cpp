#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A;
  cin >> N >> A;

  vector<int> T(N);
  rep(i, N) cin >> T[i];

  int et = 0;
  rep(i, N) et = max(et + A, T[i] + A), cout << et << endl;
  return 0;
}