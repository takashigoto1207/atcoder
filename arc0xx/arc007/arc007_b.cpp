#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int a[N + 1];
  rep(i, N + 1) a[i] = i;

  rep(i, M) {
    int d;
    cin >> d;
    rep(j, N + 1) {
      if (a[j] == d) {
        swap(a[j], a[0]);
        break;
      }
    }
  }
  rep(i, N) cout << a[i + 1] << endl;
  return 0;
}