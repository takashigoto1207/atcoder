#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> D(N);
  rep(i, N) cin >> D[i];

  int ans = 0;
  for (int m = 1; m <= N; m++) {
    string month = to_string(m);
    for (int d = 1; d <= D[m - 1]; d++) {
      string date = month + to_string(d);
      if (size(set<char>(date.begin(), date.end())) == 1) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}