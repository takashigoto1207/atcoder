#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s, ans;
  cin >> s;

  for (char c : s) {
    if (c == '0' || c == '1')
      ans += c;
    else if (!ans.empty() && c == 'B')
      ans.pop_back();
  }

  cout << ans << endl;
  return 0;
}