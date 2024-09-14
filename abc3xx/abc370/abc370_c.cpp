#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  vector<string> ans;
  int n = S.size();
  while (S != T) {
    string nxt(n, 'z');
    rep(i, n) {
      if (S[i] != T[i]) {
        string tmp = S;
        tmp[i] = T[i];
        nxt = min(nxt, tmp);
      }
    }
    ans.push_back(nxt);
    S = nxt;
  }
  cout << ans.size() << endl;
  for (string x : ans) cout << x << endl;
}