#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A;
  int ans = 0;
  rep(i, N) {
    cin >> A;
    ans += max(10, A) - 10;
  }

  cout << ans << endl;
  return 0;
}