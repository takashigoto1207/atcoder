#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N), Q(N);
  rep(i, N) cin >> P[i];
  rep(i, N) cin >> Q[i];

  vector<int> a(N);
  iota(a.begin(), a.end(), 1);

  int ans = 0;
  do {
    if (P < a && a < Q) ans++;
  } while (next_permutation(a.begin(), a.end()));
  cout << ans << endl;
  return 0;
}