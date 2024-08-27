#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> s(N);
  rep(i, N) cin >> s[i];

  rep(i, N) reverse(s[i].begin(), s[i].end());
  sort(s.begin(), s.end());

  rep(i, N) reverse(s[i].begin(), s[i].end());
  rep(i, N) cout << s[i] << endl;
  return 0;
}