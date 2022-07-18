#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<char, int> mp;
  char c;
  rep(i, 3) {
    cin >> c;
    mp[c]++;
  }

  for (auto x : mp) {
    if (x.second == 1) {
      cout << x.first << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}