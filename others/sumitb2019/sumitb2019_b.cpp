#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  rep(i, N + 1) {
    if (N == (int)(i * 1.08)) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}