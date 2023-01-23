#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  for (int i = 1; i < 1010; i++) {
    if ((int)(i * 0.08) == A && (int)(i * 0.1) == B) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}