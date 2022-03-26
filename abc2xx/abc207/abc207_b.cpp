#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  if (D * C - B < 1)
    cout << -1 << endl;
  else
    cout << (ceil((A) / (C * D - B))) << endl;
  return 0;
}