#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int m;
  cin >> m;

  int ans = 0;
  if (m < 100)
    ans = 0;
  else if (100 <= m && m <= 5000)
    ans = m / 100;
  else if (6000 <= m && m <= 30000)
    ans = m / 1000 + 50;
  else if (35000 <= m && m <= 70000)
    ans = (m / 1000 - 30) / 5 + 80;
  else if (70 < m)
    ans = 89;

  cout << setfill('0') << setw(2) << right << ans << endl;
  return 0;
}