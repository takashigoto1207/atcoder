#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int calc = 0;
  rep(i, N) {
    calc += a[i];
    if (calc >= K) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}