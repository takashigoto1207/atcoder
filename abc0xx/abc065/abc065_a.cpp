#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, A, B;
  cin >> X >> A >> B;

  if (B <= A)
    cout << "delicious" << endl;
  else if (B <= A + X)
    cout << "safe" << endl;
  else
    cout << "dangerous" << endl;
  return 0;
}