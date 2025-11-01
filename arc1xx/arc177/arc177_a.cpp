#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, D, E, F, N;
  cin >> A >> B >> C >> D >> E >> F >> N;

  vector<int> X(N);
  rep(i, N) cin >> X[i];

  bool flg = true;
  rep(i, N) {
    while (X[i] >= 500 && F >= 1) {
      X[i] -= 500;
      F -= 1;
    }
    while (X[i] >= 100 && E >= 1) {
      X[i] -= 100;
      E -= 1;
    }
    while (X[i] >= 50 && D >= 1) {
      X[i] -= 50;
      D -= 1;
    }
    while (X[i] >= 10 && C >= 1) {
      X[i] -= 10;
      C -= 1;
    }
    while (X[i] >= 5 && B >= 1) {
      X[i] -= 5;
      B -= 1;
    }
    while (X[i] >= 1 && A >= 1) {
      X[i] -= 1;
      A -= 1;
    }
    if (X[i] != 0) {
      flg = false;
      break;
    }
  }

  if (flg == true)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}