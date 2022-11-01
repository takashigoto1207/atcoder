#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> D(N);
  rep(i, N) cin >> D[i].first >> D[i].second;

  int cnt = 0;
  rep(i, N) {
    if (D[i].first == D[i].second)
      cnt++;
    else
      cnt = 0;
    if (3 <= cnt) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}