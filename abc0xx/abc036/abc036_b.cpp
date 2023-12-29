#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s(N);
  rep(i, N) cin >> s[i];

  rep(i, N) {
    rep(j, N) cout << s[N - j - 1][i];
    cout << endl;
  }
  return 0;
}