#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

vector<vector<int>> to;
vector<int> ans;
void dfs(int v, int p = -1) {
  ans.push_back(v);
  for (int u : to[v]) {
    if (u == p) continue;
    dfs(u, v);
    ans.push_back(v);
  }
}

int main() {
  int N;
  cin >> N;
  to.resize(N);
  rep(i, N - 1) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    to[A].push_back(B);
    to[B].push_back(A);
  }
  rep(i, N) sort(to[i].begin(), to[i].end());
  dfs(0);
  for (int x : ans) cout << x + 1 << " ";
  cout << endl;
  return 0;
}