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

  map<int, int> mp;
  rep(i, N) mp[A[i]]++;

  int r = 0;
  for (auto x : mp)
    if (x.second == 1) r = max(r, x.first);

  rep(i, N) {
    if (r == A[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}