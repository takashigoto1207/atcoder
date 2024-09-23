#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int M;
  cin >> M;

  vector<int> ans;
  rep(k, 11) {
    rep(i, (M % 3)) ans.push_back(k);
    M /= 3;
  }
  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}