#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double A, B;
  cin >> A >> B;

  cout << round(A / B) << endl;
  return 0;
}