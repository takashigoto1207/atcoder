#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> to(N);
  vector<int> deg(N);
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    to[A].push_back(B);
    deg[B]++;
  }
  priority_queue<int, vector<int>, greater<int>> q;
  rep(i, N) if (deg[i] == 0) q.push(i);
  vector<int> ans;
  while (q.size()) {
    int v = q.top();
    q.pop();
    ans.push_back(v);
    for (int x : to[v]) {
      deg[x]--;
      if (deg[x] == 0) q.push(x);
    }
  }
  if (ans.size() != N)
    cout << -1 << endl;
  else {
    for (int x : ans) cout << x + 1 << " ";
    cout << endl;
  }
  return 0;
}