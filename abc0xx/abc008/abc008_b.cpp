#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string S;
  map<string, int> mp;
  rep(i, N) {
    cin >> S;
    mp[S]++;
  }

  int mx = INT_MIN;
  string ans;
  for (auto x : mp) {
    if (mx < x.second) {
      mx = x.second;
      ans = x.first;
    }
  }
  cout << ans << endl;
  return 0;
}