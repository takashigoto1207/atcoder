#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  cin >> Q;
  vector<int> ans;
  rep(i, Q) {
    int t, k, x;
    cin >> t;
    if (t == 1) {
      cin >> k >> x;
      A[k - 1] = x;
    } else {
      cin >> k;
      ans.emplace_back(A[k - 1]);
    }
  }

  for (int x : ans) cout << x << endl;
  return 0;
}