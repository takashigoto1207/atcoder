#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> balls(M, -1);

  int C, S;
  rep(i, N) {
    cin >> C >> S;
    balls[C - 1] = max(balls[C - 1], S);
  }

  rep(i, M) cout << balls[i] << " ";
  cout << endl;
  return 0;
}