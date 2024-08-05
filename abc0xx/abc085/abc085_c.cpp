#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Y;
  cin >> N >> Y;

  rep(i, N + 1) {
    rep(j, N + 1 - i) {
      if (Y == 10000 * i + 5000 * j + 1000 * (N - i - j)) {
        cout << i << " " << j << " " << N - i - j << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}