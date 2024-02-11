#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int Q;
  vector<int> x, ans;
  cin >> Q;

  while (Q--) {
    int a, b;
    cin >> a >> b;
    if (a == 1)
      x.push_back(b);
    else
      ans.push_back(x[x.size() - b]);
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}