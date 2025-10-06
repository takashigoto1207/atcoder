#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q, t, X;
  cin >> Q;

  vector<int> ans;
  queue<int> que;
  rep(i, Q) {
    cin >> t;
    if (t == 1) {
      cin >> X;
      que.push(X);
    } else {
      ans.push_back(que.front());
      que.pop();
    }
  }
  for (int x : ans) cout << x << endl;
  return 0;
}