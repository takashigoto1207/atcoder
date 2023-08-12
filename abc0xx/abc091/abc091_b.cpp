#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  string s;
  map<string, int> bmp;
  map<string, int> rmp;

  cin >> N;
  rep(i, N) {
    cin >> s;
    bmp[s]++;
  }

  cin >> M;
  rep(i, M) {
    cin >> s;
    rmp[s]++;
  }

  int ans = 0;
  for (auto x : bmp) {
    ans = max(ans, x.second - rmp[x.first]);
  }
  cout << ans << endl;
  return 0;
}