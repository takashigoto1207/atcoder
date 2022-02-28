#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A > 0 && B == 0)
    cout << "Gold" << endl;
  else if (A == 0 && B > 0)
    cout << "Silver" << endl;
  else
    cout << "Alloy" << endl;
  return 0;
}