#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  priority_queue<ll, vector<ll>, greater<ll>> q;
  ll s = 0;
  vector<ll> ans;

  rep(i, Q) {
    int type;
    cin >> type;
    if (type == 3) {
      ans.emplace_back(q.top() + s);
      q.pop();
    } else {
      int x;
      cin >> x;
      if (type == 1)
        q.push(x - s);
      else
        s += x;
    }
  }
  for (ll x : ans) cout << x << endl;
  return 0;
}