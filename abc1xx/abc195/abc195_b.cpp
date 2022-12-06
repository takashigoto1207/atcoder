#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, W;
  cin >> A >> B >> W;

  W *= 1000;
  if (W / A < W / B + min(1, W % B))
    cout << "UNSATISFIABLE" << endl;
  else
    cout << W / B + min(1, W % B) << " " << W / A << endl;
  return 0;
}