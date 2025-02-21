#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x;
  map<int, int> mp;

  rep(i, 6) {
    cin >> x;
    mp[x]++;
  }

  for (auto x : mp) {
    if (x.second >= 3) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}