#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, P, P1, m = 0;
  cin >> N;

  rep(i, N) {
    cin >> P;
    if (i == 0)
      P1 = P;
    else
      m = max(P, m);
  }

  cout << max(0, m - P1 + 1) << endl;
}