#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N), T(N);
  rep(i, N) cin >> S[i] >> T[i];

  map<string, int> mp;
  dsu ds(2 * N + 1);
  rep(i, N) {
    if (mp[S[i]] == 0) mp[S[i]] = mp.size();
    if (mp[T[i]] == 0) mp[T[i]] = mp.size();
    if (ds.same(mp[S[i]], mp[T[i]])) {
      cout << "No" << endl;
      return 0;
    }
    ds.merge(mp[S[i]], mp[T[i]]);
  }
  cout << "Yes" << endl;
  return 0;
}