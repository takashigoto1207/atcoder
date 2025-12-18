#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<pair<char, int>> x;
  x.emplace_back(S[0], 0);
  for (char c : S) {
    if (x.back().first == c)
      x.back().second++;
    else
      x.emplace_back(c, 1);
  }

  vector<int> mx(26);
  for (auto [c, len] : x) mx[c - 'a'] = max(mx[c - 'a'], len);

  int ans = 0;
  for (int len : mx) ans += len;
  cout << ans << endl;
  return 0;
}