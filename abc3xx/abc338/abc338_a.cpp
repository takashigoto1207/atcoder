#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, ans = "Yes";
  cin >> S;

  if (islower(S[0])) ans = "No";
  for (int i = 1; i < S.size(); i++)
    if (isupper(S[i])) ans = "No";
  cout << ans << endl;
  return 0;
}