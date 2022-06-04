#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll p[31][31];
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i)
        p[i][j] = 1;
      else
        p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
      cout << p[i][j];
      if (j < i) cout << " ";
    }
    cout << endl;
  }
  return 0;
}