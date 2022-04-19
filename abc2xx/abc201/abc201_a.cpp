#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A1, A2, A3;
  cin >> A1 >> A2 >> A3;

  if (A1 + A2 == 2 * A3 || A2 + A3 == 2 * A1 || A3 + A1 == 2 * A2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}