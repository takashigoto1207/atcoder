#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M, A, B;
  cin >> N >> M;

  vector<vector<int>> to(N);
  rep(i, M) {
    cin >> A >> B;
    A--, B--;
    to[A].push_back(B);
  }

  int ans = 0;
  rep(i, N) {
    queue<int> que;
    vector<bool> used(N, false);
    used[i] = true;
    ans++;
    que.push(i);
    while (que.size()) {
      int v = que.front();
      que.pop();
      for (int x : to[v]) {
        if (used[x]) continue;
        ans++;
        used[x] = true;
        que.push(x);
      }
    }
  }
  cout << ans << endl;
  return 0;
}