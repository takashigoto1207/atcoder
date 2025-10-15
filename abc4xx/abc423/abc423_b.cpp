#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> L(N);
  rep(i, N) cin >> L[i];

  int cnt = 2;
  rep(i, N) {
    if (L[i] == 0)
      cnt++;
    else
      break;
  }
  for (int i = N - 1; i > 0; i--) {
    if (L[i] == 0)
      cnt++;
    else
      break;
  }

  cout << max(0, N + 1 - cnt) << endl;
  return 0;
}