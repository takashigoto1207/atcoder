#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int V, A, B, C;
  cin >> V >> A >> B >> C;

  V %= (A + B + C);
  if (V < A)
    cout << "F" << endl;
  else if (V < A + B)
    cout << "M" << endl;
  else
    cout << "T" << endl;
  return 0;
}