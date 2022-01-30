#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string ans;
  int p;

  string str = "abcdefghijklmnopqrstuvwxyz";
  rep(i, 26) {
    cin >> p;
    ans += str[p - 1];
  }
  cout << ans << endl;
  return 0;
}