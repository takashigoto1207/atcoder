#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  cout << max(0, min(B, D) - max(A, C)) << endl;
  return 0;
}