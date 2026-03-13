#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> cnt(N + 1, 0);
  for (int x = 1; x * x <= N; x++)
    for (int y = x + 1; x * x + y * y <= N; y++) cnt[x * x + y * y]++;

  vector<int> ans;
  rep(i, N + 1) if (cnt[i] == 1) ans.push_back(i);

  cout << ans.size() << endl;
  for (int x : ans) cout << x << " ";
  cout << endl;
  return 0;
}