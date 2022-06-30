#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N = 1 << 20;
  int Q;
  cin >> Q;

  set<int> st;
  rep(i, N) st.insert(i);

  vector<ll> A(N, -1), ans;

  rep(i, Q) {
    int t;
    ll x;
    cin >> t >> x;
    if (t == 1) {
      int q = x % N;
      auto it = st.lower_bound(q);
      if (it == st.end()) it = st.begin();
      A[*it] = x;
      st.erase(it);
    } else {
      ans.emplace_back(A[x % N]);
    }
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}