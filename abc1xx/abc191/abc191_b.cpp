#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> ans;
  rep(i, N) if (A[i] != X) ans.push_back(A[i]);
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}