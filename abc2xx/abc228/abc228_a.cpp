#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int S, T, X;
  cin >> S >> T >> X;

  if (S < T) {
    if (S <= X && X < T)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  } else {
    if (X < T || S <= X)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}