#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<bool> flag(10, false);
  rep(i, 9) flag[S[i] - '0'] = true;

  rep(i, 10) if (!flag[i]) cout << i << endl;
  return 0;
}