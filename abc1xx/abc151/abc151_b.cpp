#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, M;
  cin >> N >> K >> M;
  int A;
  int sum = 0;

  rep(i, N - 1) {
    cin >> A;
    sum += A;
  }

  if (N * M > sum + K)
    cout << -1 << endl;
  else
    cout << max(0, N * M - sum);
  return 0;
}