#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i, N) cin >> P[i];

  rep(i, N) {
    int cnt = 1;
    rep(j, N) if (P[i] < P[j]) cnt++;
    cout << cnt << endl;
  }
  return 0;
}