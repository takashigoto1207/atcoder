#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> ans;

  rep(i, L - 1) ans.push_back(i + 1);
  for (int i = R; i >= L; i--) ans.push_back(i);
  for (int i = R + 1; i <= N; i++) ans.push_back(i);

  rep(i, N) cout << ans[i] << " ";
  cout << endl;
  return 0;
}