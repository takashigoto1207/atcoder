#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  string S;
  cin >> N >> D >> S;
  rep(i, D) {
    for (int j = N - 1; j >= 0; j--) {
      if (S[j] == '@') {
        S[j] = '.';
        break;
      }
    }
  }
  cout << S << endl;
  return 0;
}