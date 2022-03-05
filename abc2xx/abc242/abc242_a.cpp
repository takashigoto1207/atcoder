#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  if (X <= A)
    cout << 1 << endl;
  else if (X <= B)
    cout << fixed << setprecision(10) << (double)C / (B - A) << endl;
  else
    cout << 0 << endl;
  return 0;
}