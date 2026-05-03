#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int W;
  cin >> W;

  string S = "DiscoPresentsDiscoveryChannelProgrammingContest2016";

  rep(i, S.size()) {
    cout << S[i];
    if ((i + 1) % W == 0 && i != S.size() - 1) cout << endl;
  }
  cout << endl;
  return 0;
}