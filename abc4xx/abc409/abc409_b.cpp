#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  for (int i = N; i >= 0; i--) {
    int cnt = 0;
    for (auto x : A)
      if (x >= i) cnt++;
    if (cnt >= i) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}