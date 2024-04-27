#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int N;
  cin >> S >> N;

  int l, r;
  rep(i, N) {
    cin >> l >> r;
    reverse(S.begin() + l - 1, S.begin() + r);
  }
  cout << S << endl;
  return 0;
}