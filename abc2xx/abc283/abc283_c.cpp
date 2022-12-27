#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = S.size();
  rep(i, S.size() - 1) {
    if (S[i] == '0' && S[i + 1] == '0') ans--, i++;
  }
  cout << ans << endl;
  return 0;
}