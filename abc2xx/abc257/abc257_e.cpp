#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> C(9);
  rep(i, 9) cin >> C[i];

  int k = 0, m = 0;
  rep(i, 9) if (k <= N / C[i]) k = N / C[i], m = i;

  int a = N % C[m];
  rep(i, k) {
    for (int x = 8; 0 <= x; x--) {
      if (C[x] - C[m] <= a) {
        cout << x + 1;
        a -= (C[x] - C[m]);
        break;
      }
    }
  }
  cout << endl;
  return 0;
}