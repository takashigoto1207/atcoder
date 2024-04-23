#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i], A[i] -= 1;

  vector<pair<int, int>> ans;
  rep(i, N) {
    while (A[i] != i) {
      ans.push_back({i + 1, A[i] + 1});
      swap(A[i], A[A[i]]);
    }
  }

  cout << ans.size() << endl;
  for (auto x : ans) cout << x.first << " " << x.second << endl;
  return 0;
}