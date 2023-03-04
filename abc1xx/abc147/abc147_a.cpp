#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A1, A2, A3;
  cin >> A1 >> A2 >> A3;

  if (A1 + A2 + A3 >= 22)
    cout << "bust" << endl;
  else
    cout << "win" << endl;
  return 0;
}