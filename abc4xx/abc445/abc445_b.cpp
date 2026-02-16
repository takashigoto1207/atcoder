#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int l = 0;
  vector<string> S(N);
  rep(i, N) {
    cin >> S[i];
    l = max(l, (int)S[i].size());
  }
  rep(i, N) {
    rep(j, (l - S[i].size()) / 2) cout << ".";
    cout << S[i];
    rep(j, (l - S[i].size()) / 2) cout << ".";
    cout << endl;
  }
  return 0;
}