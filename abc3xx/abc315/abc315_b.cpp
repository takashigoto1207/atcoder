#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int M;
  cin >> M;

  vector<int> D(M);
  int sum = 0;
  rep(i, M) cin >> D[i], sum += D[i];
  sum = (sum + 1) / 2;

  rep(i, M) {
    if (sum > D[i])
      sum -= D[i];
    else {
      cout << i + 1 << " " << sum;
      break;
    }
  }
  return 0;
}