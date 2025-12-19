#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N + 1, 0), Q(N + 1, 0), Qt(N + 1, 0);
  rep(i, N) cin >> P[i + 1];
  rep(i, N) {
    cin >> Q[i + 1];
    Qt[Q[i + 1]] = i + 1;
  }
  rep(i, N) cout << Q[P[Qt[i + 1]]] << " ";
  cout << endl;
  return 0;
}