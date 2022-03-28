#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A < C)
    cout << "Takahashi" << endl;
  else if (A > C)
    cout << "Aoki" << endl;
  else {
    if (B <= D)
      cout << "Takahashi" << endl;
    else
      cout << "Aoki" << endl;
  }
  return 0;
}