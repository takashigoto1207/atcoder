#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A == B)
    cout << 1 << endl;
  else if (abs(A - B) % 2 != 0)
    cout << 2 << endl;
  else
    cout << 3 << endl;
  return 0;
}