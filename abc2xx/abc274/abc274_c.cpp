#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(2 * N + 2, 0), ans(2 * N + 2, 0);
  for (int i = 1; i <= N; i++) {
    int A;
    cin >> A;
    p[i * 2] = p[i * 2 + 1] = A;
  }
  for (int i = 2; i <= N * 2 + 1; i++) ans[i] = ans[p[i]] + 1;
  for (int i = 1; i <= N * 2 + 1; i++) cout << ans[i] << endl;
  return 0;
}