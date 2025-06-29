#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> bk(N, 0);

  rep(i, Q) {
    int X;
    cin >> X;
    if (1 <= X) {
      bk[X - 1]++;
      cout << X << " ";
    } else {
      int y = 1;
      for (int j = 1; j <= N; j++)
        if (bk[j - 1] < bk[y - 1]) y = j;
      bk[y - 1]++;
      cout << y << " ";
    }
  }
  cout << endl;
  return 0;
}