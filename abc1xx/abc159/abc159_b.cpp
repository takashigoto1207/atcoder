#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string x = S;
  reverse(x.begin(), x.end());
  if (x != S) {
    cout << "No" << endl;
    return 0;
  }

  string y = S.substr(0, (S.size() - 1) / 2);
  reverse(y.begin(), y.end());
  if (y != S.substr(0, (S.size() - 1) / 2)) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}