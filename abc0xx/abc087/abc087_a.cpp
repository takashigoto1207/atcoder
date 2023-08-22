#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, A, B;
  cin >> X >> A >> B;

  cout << (X - A) % B << endl;
  return 0;
}