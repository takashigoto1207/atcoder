#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  rep(i, N - 1) {
    rep(j, N - 1 - i) {
      if (S[j] == S[i + j + 1]) {
        cout << j << endl;
        break;
      }
      if (j == N - 2 - i) cout << j + 1 << endl;
    }
  }

  return 0;
}