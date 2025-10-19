#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  getline(cin, S);

  string ans = "";
  rep(i, S.size()) {
    if (S[i] == 'L')
      ans += "< ", i += 4;
    else if (S[i] == 'R')
      ans += "> ", i += 5;
    else if (S[i] == 'A')
      ans += "A ", i += 7;
  }
  if (!ans.empty() && ans.back() == ' ') ans.pop_back();
  cout << ans << endl;
  return 0;
}