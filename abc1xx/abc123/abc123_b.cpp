#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

// ordinary_time
int ot(int x) { return (x / 10 + min(1, x % 10)) * 10; }
// surplus_time
int st(int x) { return ot(x) - x; }

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  cout << ot(A) + ot(B) + ot(C) + ot(D) + ot(E) -
              max({st(A), st(B), st(C), st(D), st(E)})
       << endl;
  return 0;
}