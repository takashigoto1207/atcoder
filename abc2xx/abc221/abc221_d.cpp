#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  vector<pair<int, int>> p;
  cin >> N;
  rep(i, N) {
    cin >> A >> B;
    p.emplace_back(A, 1);
    p.emplace_back(A + B, -1);
  }
  sort(p.begin(), p.end());

  int cnt = 0;
  vector<int> ans(N + 1, 0);
  rep(i, (int)p.size() - 1) {
    cnt += p[i].second;
    ans[cnt] += (p[i + 1].first - p[i].first);
  }
  rep(i, N) cout << ans[i + 1] << " ";
  cout << endl;
  return 0;
}