#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, Q;
  cin >> L >> Q;

  set<int> st;
  st.insert(0);
  st.insert(L);

  vector<int> ans;
  rep(i, Q) {
    int c, x;
    cin >> c >> x;
    if (c == 1)
      st.insert(x);
    else {
      auto it = st.lower_bound(x);
      int r = *it;
      it--;
      int l = *it;
      ans.emplace_back(r - l);
    }
  }

  for (int x : ans) cout << x << endl;
  return 0;
}