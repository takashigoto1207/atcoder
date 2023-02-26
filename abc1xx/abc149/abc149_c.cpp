#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool prime(int n) {
  if (n < 2)
    return false;
  else {
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) return false;
    }
    return true;
  }
}

int main() {
  int X;
  cin >> X;

  while (!(prime(X))) X++;
  cout << X << endl;
  return 0;
}