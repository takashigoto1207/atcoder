#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll X;
  cin >> X;

  if (X < 0 && X % 10 != 0) {
    cout << X / 10 - 1 << endl;
  } else {
    cout << X / 10 << endl;
  }
}