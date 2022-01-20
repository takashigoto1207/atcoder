#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  for (int i = A; i <= B; i++) {
    if (i % C == 0) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}