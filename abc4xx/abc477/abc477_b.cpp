#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> X(N);
  rep(i, N) cin >> X[i];

  vector<int> ans;
  rep(i, N) {
    bool flg = true;
    rep(j, N) if (i != j && abs(X[i] - X[j]) < D) flg = false;
    if (flg) ans.push_back(i + 1);
  }

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
}