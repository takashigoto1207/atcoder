#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> ans(N, -1);
  int s, c;
  bool f = false;
  rep(i, M) {
    cin >> s >> c;
    if (ans[s - 1] != -1 && ans[s - 1] != c) {
      f = true;
    } else if (N != 1 && s == 1 && c == 0) {
      f = true;
    } else
      ans[s - 1] = c;
  }

  if (f) {
    cout << -1 << endl;
    return 0;
  }

  if (N == 1) {
    cout << (ans[0] == -1 ? 0 : ans[0]);
    return 0;
  }

  rep(i, N) {
    if (i == 0)
      cout << (ans[0] == -1 ? 1 : ans[0]);
    else
      cout << (ans[i] == -1 ? 0 : ans[i]);
  }
  return 0;
}