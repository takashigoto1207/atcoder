#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> H(N);
  rep(i, N) cin >> H[i];

  rep(i, N) if (i != 0 && H[0] < H[i]) {
    cout << i + 1 << endl;
    return 0;
  }
  cout << -1 << endl;
  return 0;
}