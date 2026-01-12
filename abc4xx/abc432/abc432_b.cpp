#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string X;
  cin >> X;

  sort(X.begin(), X.end());
  rep(i, X.size()) {
    if (X[i] != '0') {
      swap(X[0], X[i]);
      break;
    }
  }
  cout << X << endl;
  return 0;
}