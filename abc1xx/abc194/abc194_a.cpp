#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A + B >= 15 && B >= 8)
    cout << 1 << endl;
  else if (A + B >= 10 && B >= 3)
    cout << 2 << endl;
  else if (A + B >= 3)
    cout << 3 << endl;
  else
    cout << 4 << endl;
  return 0;
}