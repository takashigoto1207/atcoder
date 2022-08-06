#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<int, int> mp;

  rep(i, 5) {
    int x;
    cin >> x;
    mp[x]++;
  }

  if (mp.size() != 2) {
    cout << "No" << endl;
    return 0;
  }

  for (auto x : mp) {
    if (x.second == 1 || x.second == 4) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}