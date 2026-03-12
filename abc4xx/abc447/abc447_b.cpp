#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> cnt(26, 0);
  for (char c : S) cnt[c - 'a']++;

  int ma = *max_element(cnt.begin(), cnt.end());
  string ans = "";
  for (char c : S)
    if (cnt[c - 'a'] != ma) ans += c;

  cout << ans << endl;
}