#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;

  rep(i, N) {
    set<char> st;
    rep(j, i) st.insert(S[j]);

    int cnt = 0;
    string t = S.substr(i);
    for (char x : st) {
      if (count(t.begin(), t.end(), x) > 0) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}