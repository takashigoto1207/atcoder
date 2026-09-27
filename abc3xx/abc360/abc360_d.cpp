#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, T;
  string S;
  cin >> N >> T >> S;

  ll X;
  vector<ll> pos, neg;
  rep(i, N) {
    cin >> X;
    if (S[i] == '0')
      neg.push_back(X);
    else
      pos.push_back(X);
  }

  sort(pos.begin(), pos.end());
  sort(neg.begin(), neg.end());

  ll ans = 0;
  rep(i, pos.size()) {
    auto right = upper_bound(neg.begin(), neg.end(), pos[i] + 2 * T);
    auto left = lower_bound(neg.begin(), neg.end(), pos[i]);
    ans += (right - left);
  }
  cout << ans << endl;
  return 0;
}