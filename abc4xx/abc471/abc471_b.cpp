#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  rep(i, N) {
    string S, T;
    cin >> S;
    for (char c : S) c = tolower(c), T += c;
    mp[T]++;
  }

  int ans = 0;
  for (auto x : mp) ans = max(ans, x.second);
  cout << ans << endl;
  return 0;
}