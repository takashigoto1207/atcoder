#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  string ans;
  while (N) {
    if (N % 2 == 1)
      N--, ans = "A" + ans;
    else
      N /= 2, ans = "B" + ans;
  }
  cout << ans << endl;
  return 0;
}