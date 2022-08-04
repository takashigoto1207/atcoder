#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int l = 0, r = INT_MAX;
  rep(i, N) {
    int A;
    cin >> A;
    l = max(l, A);
  }
  rep(i, N) {
    int B;
    cin >> B;
    r = min(r, B);
  }

  cout << max(0, r - l + 1) << endl;
  return 0;
}