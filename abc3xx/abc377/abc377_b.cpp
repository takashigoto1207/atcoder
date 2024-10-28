#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(8);
  rep(i, 8) cin >> S[i];

  set<int> r, c;
  rep(i, 8) rep(j, 8) if (S[i][j] == '#') r.insert(i), c.insert(j);
  cout << (8 - r.size()) * (8 - c.size()) << endl;
  return 0;
}