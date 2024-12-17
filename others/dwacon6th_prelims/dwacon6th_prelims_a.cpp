#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s(N);
  vector<int> t(N);
  rep(i, N) cin >> s[i] >> t[i];

  string X;
  cin >> X;

  int ans = 0;
  bool sleep = false;
  rep(i, N) {
    if (sleep) ans += t[i];
    if (s[i] == X) sleep = true;
  }
  cout << ans << endl;
  return 0;
}