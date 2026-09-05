#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string s, t;
  cin >> N >> s >> t;

  for (int i = N; i >= 0; i--) {
    if (s.substr(N - i, i) == t.substr(0, i)) {
      cout << N + N - i << endl;
      return 0;
    }
  }
  cout << 2 * N << endl;
  return 0;
}