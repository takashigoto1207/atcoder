#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Q, x;
  cin >> N >> Q;

  vector<int> ball(N), idx(N);
  rep(i, N) ball[i] = i, idx[i] = i;

  rep(qi, Q) {
    cin >> x;
    x--;
    int i = idx[x];
    int j = i + 1;
    if (j == N) j = i - 1;
    int y = ball[j];
    swap(ball[i], ball[j]);
    swap(idx[x], idx[y]);
  }
  rep(i, N) cout << ball[i] + 1 << ' ';
  cout << endl;
  return 0;
}