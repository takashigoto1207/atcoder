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
  bool login = false;
  string S;
  rep(i, N) {
    cin >> S;
    if (S == "login")
      login = true;
    else if (S == "logout")
      login = false;
    else if (S == "private" and !login)
      ans++;
  }
  cout << ans << endl;
  return 0;
}