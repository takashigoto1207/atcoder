#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string D;
  cin >> D;

  string ans = "";
  for (char x : D) {
    if (x == 'N')
      ans += 'S';
    else if (x == 'S')
      ans += 'N';
    else if (x == 'E')
      ans += 'W';
    else if (x == 'W')
      ans += 'E';
  }
  cout << ans << endl;
  return 0;
}