#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A % 2 != B % 2)
    cout << "IMPOSSIBLE" << endl;
  else
    cout << (A + B) / 2 << endl;
  return 0;
}