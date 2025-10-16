#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> x(M + 1, 0);
  int A;
  rep(i, N) {
    cin >> A;
    x[A]++;

    bool flg = true;
    for (int j = 1; j <= M; j++)
      if (x[j] == 0) flg = false;
    if (flg) {
      cout << N - i << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}