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

  vector<int> ad, ch;
  rep(i, N) {
    int W;
    cin >> W;
    if (S[i] == '1')
      ad.push_back(W);
    else
      ch.emplace_back(W);
  }
  if (ad.size() == N || ch.size() == N) {
    cout << N << endl;
    return 0;
  }

  sort(ad.begin(), ad.end());
  sort(ch.begin(), ch.end());

  int ans = 0;
  rep(i, ad.size()) {
    int iter = lower_bound(ch.begin(), ch.end(), ad[i]) - ch.begin();
    ans = max(ans, (int)(ad.size()) + iter - i);
  }
  cout << ans << endl;
  return 0;
}