#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;

  int x, y;
  int max_x = INT_MIN;
  int min_y = INT_MAX;
  rep(i, N) {
    cin >> x;
    max_x = max(x, max_x);
  }
  rep(i, M) {
    cin >> y;
    min_y = min(y, min_y);
  }

  if (max_x < min_y && X < min_y && max_x < Y)
    cout << "No War" << endl;
  else
    cout << "War" << endl;
  return 0;
}