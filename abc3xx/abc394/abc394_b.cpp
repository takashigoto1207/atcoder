#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];

  sort(S.begin(), S.end(),
       [](string x, string y) { return x.size() < y.size(); });
  string ans = "";
  rep(i, N) ans += S[i];
  cout << ans << endl;
  return 0;
}