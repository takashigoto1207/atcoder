#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  priority_queue<int, vector<int>, greater<int>> q;
  vector<int> ans;
  rep(i, Q) {
    int type, h;
    cin >> type >> h;
    if (type == 1)
      q.push(h);
    else
      while (q.size() && q.top() <= h) q.pop();
    ans.push_back(q.size());
  }
  for (auto x : ans) cout << x << endl;
  return 0;
}