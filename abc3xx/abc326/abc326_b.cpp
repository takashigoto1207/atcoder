#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool check(int x) {
  int c3 = x / 100;
  int c2 = x / 10 % 10;
  int c1 = x % 10;
  return c3 * c2 == c1;
}
int main() {
  int N;
  cin >> N;

  for (int i = N; i <= 919; i++) {
    if (check(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}