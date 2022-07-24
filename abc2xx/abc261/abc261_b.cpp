#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N) rep(j, N) {
    if (i == j) continue;
    if (A[i][j] == 'W' && A[j][i] != 'L') {
      cout << "incorrect" << endl;
      return 0;
    }
    if (A[i][j] == 'L' && A[j][i] != 'W') {
      cout << "incorrect" << endl;
      return 0;
    }
    if (A[i][j] == '-' && A[j][i] != '-') {
      cout << "incorrect" << endl;
      return 0;
    }
  }

  cout << "correct" << endl;
  return 0;
}