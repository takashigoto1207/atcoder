#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> ans(S.size());

  rep(r, 2) {
    {
      int cnt = 0;
      rep(i, S.size()) {
        if (S[i] == 'R')
          cnt++;
        else {
          ans[i] += cnt / 2;
          ans[i - 1] += (cnt + 1) / 2;
          cnt = 0;
        }
      }
    }
    reverse(ans.begin(), ans.end());
    reverse(S.begin(), S.end());
    rep(i, S.size()) {
      if (S[i] == 'L')
        S[i] = 'R';
      else
        S[i] = 'L';
    }
  }

  rep(i, S.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}