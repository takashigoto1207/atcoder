#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N;

  int ans = 0;
  rep(i, N) {
    cin >> S;
    if (S == "Takahashi") ans++;
  }

  cout << ans << endl;
  return 0;
}