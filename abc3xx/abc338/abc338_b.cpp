#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  char ans;
  vector<int> cnt(26, 0);
  int tmp = 0;

  rep(i, S.size()) cnt[S[i] - 'a']++;
  rep(i, 26) if (cnt[i] > tmp) tmp = cnt[i], ans = 'a' + i;
  cout << ans << endl;
  return 0;
}