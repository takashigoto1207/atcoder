#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, X;
  cin >> A >> B >> X;

  if (A <= X && X <= A + B)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}