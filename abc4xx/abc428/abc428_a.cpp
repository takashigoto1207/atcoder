#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;

  cout << (X / (A + B) * A + min(A, X % (A + B))) * S << endl;
  return 0;
}