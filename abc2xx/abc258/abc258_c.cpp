#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  string S;
  cin >> N >> Q >> S;

  vector<char> ans;
  int cnt = 0;
  rep(i, Q) {
    int q, x;
    cin >> q >> x;
    if (q == 1) {
      cnt = (cnt - x + N) % N;
    } else {
      ans.emplace_back(S[(cnt + x - 1) % N]);
    }
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}