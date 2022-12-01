#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  set<pair<int, int>> f;
  vector<string> ans;
  rep(i, Q) {
    int T, A, B;
    cin >> T >> A >> B;
    if (T == 1)
      f.emplace(A, B);
    else if (T == 2)
      f.erase({A, B});
    else {
      if (f.count({A, B}) && f.count({B, A}))
        ans.emplace_back("Yes");
      else
        ans.emplace_back("No");
    }
  }
  for (string x : ans) cout << x << endl;
  return 0;
}