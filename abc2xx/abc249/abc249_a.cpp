#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;

  int takahashi = X / (A + C) * A * B + min(X % (A + C), A) * B;
  int aoki = X / (D + F) * D * E + min(X % (D + F), D) * E;

  if (aoki < takahashi)
    cout << "Takahashi" << endl;
  else if (takahashi < aoki)
    cout << "Aoki" << endl;
  else
    cout << "Draw" << endl;
  return 0;
}