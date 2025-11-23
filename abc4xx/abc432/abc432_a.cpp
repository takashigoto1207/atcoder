#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> x = {A, B, C};
  sort(x.begin(), x.end());
  cout << x[2] << x[1] << x[0] << endl;
  return 0;
}