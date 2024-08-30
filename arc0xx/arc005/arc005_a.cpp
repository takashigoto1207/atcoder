#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  string w;
  rep(i, N) {
    cin >> w;
    if (w == "TAKAHASHIKUN" || w == "Takahashikun" || w == "takahashikun" ||
        w == "TAKAHASHIKUN." || w == "Takahashikun." || w == "takahashikun.")
      ans++;
  }
  cout << ans << endl;
  return 0;
}