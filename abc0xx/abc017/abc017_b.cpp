#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string X;
  cin >> X;

  rep(i, X.size()) {
    if (X[i] == 'c' && X[i + 1] == 'h') i = i + 2;
    if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u')
      i++;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}