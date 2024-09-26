#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> W(N);
  rep(i, N) cin >> W[i];

  rep(i, N) {
    if (i > 0 && W[i - 1][W[i - 1].size() - 1] != W[i][0]) {
      if (i % 2 == 0)
        cout << "LOSE" << endl;
      else
        cout << "WIN" << endl;
      return 0;
    }
    rep(j, i) {
      if (W[i] == W[j]) {
        if (i % 2 == 0)
          cout << "LOSE" << endl;
        else
          cout << "WIN" << endl;
        return 0;
      }
    }
  }
  cout << "DRAW" << endl;
  return 0;
}