#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, x = 0, y = 0, d = 0;
  string S;
  cin >> N >> S;

  rep(i, N) {
    if (S[i] == 'S') {
      if (d == 0) x++;
      if (d == 1) y--;
      if (d == 2) x--;
      if (d == 3) y++;
    }
    if (S[i] == 'R') d = (d + 1) % 4;
  }
  cout << x << " " << y << endl;
  return 0;
}