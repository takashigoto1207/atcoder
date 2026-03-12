#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;

  cout << max(A + D + E, B + C + E) << endl;
  return 0;
}