#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  cout << (B - 1) / (A - 1) + min(1, (B - 1) % (A - 1)) << endl;
  return 0;
}