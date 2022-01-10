#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll K;
  cin >> K;

  string ans;
  while (K != 0) {
    if (K % 2 == 1)
      ans = "2" + ans;
    else
      ans = "0" + ans;
    K /= 2;
  }

  cout << ans << endl;
  return 0;
}