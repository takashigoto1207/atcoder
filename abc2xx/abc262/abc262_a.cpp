#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Y;
  cin >> Y;

  rep(i, 4) {
    if ((Y + i) % 4 == 2) {
      cout << Y + i << endl;
      return 0;
    }
  }
  return 0;
}