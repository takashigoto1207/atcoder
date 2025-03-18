#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  stack<int> st;
  rep(i, 100) st.push(0);

  vector<int> ans;
  rep(i, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int x;
      cin >> x;
      st.push(x);
    } else {
      ans.push_back(st.top());
      st.pop();
    }
  }
  for (int x : ans) cout << x << endl;
  return 0;
}