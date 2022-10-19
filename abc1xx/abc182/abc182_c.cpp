#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string N;
  cin >> N;

  int calc = 0;
  rep(i, N.size()) calc += N[i] - '0';

  if (calc % 3 == 0) {
    cout << 0 << endl;
    return 0;
  }
  rep(i, N.size()) {
    if ((calc - N[i] - '0') % 3 == 0 && N.size() > 1) {
      cout << 1 << endl;
      return 0;
    }
  }
  rep(i, N.size()) {
    rep(j, i) {
      if ((calc - (N[i] - '0') - (N[j] - '0')) % 3 == 0 && N.size() > 2) {
        cout << 2 << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}