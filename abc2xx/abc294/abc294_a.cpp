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
  rep(i, N) cin >> A[i];

  vector<int> ans;
  rep(i, N) if (A[i] % 2 == 0) ans.push_back(A[i]);
  for (int x : ans) cout << x << " ";
  cout << endl;
  return 0;
}