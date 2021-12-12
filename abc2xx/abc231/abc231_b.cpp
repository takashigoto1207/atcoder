#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  string S;
  rep(i, N) cin >> S, mp[S]++;

  int m = 0;
  string ans;
  for (auto x : mp) {
    if (x.second > m) {
      m = x.second;
      ans = x.first;
    }
  }
  cout << ans << endl;
  return 0;
}