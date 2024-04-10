#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool check(ll x) {
  string s = to_string(x);
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
  ll N, ans = 0;
  cin >> N;
  for (ll i = 1; i * i * i <= N; i++)
    if (check(i * i * i)) ans = i * i * i;
  cout << ans << endl;
  return 0;
}