#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, X;
  cin >> N >> M >> X;

  int toN = 0;
  int to0 = 0;
  int A;
  rep(i, M) {
    cin >> A;
    if (A > X)
      toN++;
    else
      to0++;
  }
  cout << min(toN, to0) << endl;
  return 0;
}