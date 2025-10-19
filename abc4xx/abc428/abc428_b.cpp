#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  map<string, int> mp;
  rep(i, N - K + 1) mp[S.substr(i, K)]++;

  int m = INT_MIN;
  for (auto x : mp) m = max(m, x.second);

  cout << m << endl;
  for (auto x : mp)
    if (m == x.second) cout << x.first << " ";
  cout << endl;
  return 0;
}