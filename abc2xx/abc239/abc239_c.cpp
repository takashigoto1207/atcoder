#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  for (int i = x1 - 2; i <= x1 + 2; i++) {
    for (int j = y1 - 2; j <= y1 + 2; j++) {
      if ((x1 - i) * (x1 - i) + (y1 - j) * (y1 - j) == 5 &&
          (x2 - i) * (x2 - i) + (y2 - j) * (y2 - j) == 5) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}