#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int x;
  rep(i, 4 * N - 1) {
    cin >> x;
    A[x - 1]++;
  }

  rep(i, N) {
    if (A[i] != 4) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}