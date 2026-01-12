#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> T(N);
  rep(i, N) cin >> T[i].first;
  rep(i, N) T[i].second = i + 1;

  sort(T.begin(), T.end());

  cout << T[0].second << " " << T[1].second << " " << T[2].second << endl;
  return 0;
}