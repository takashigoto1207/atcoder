#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  set<int> tops;
  vector<int> nxt(N, -1), num(N), ans(N, -1);

  rep(i, N) {
    int P;
    cin >> P, P--;

    auto it = tops.lower_bound(P);
    if (it == tops.end()) {
      num[P] = 1;
    } else {
      int x = *it;
      tops.erase(it);
      nxt[P] = x;
      num[P] = num[x] + 1;
    }
    if (num[P] == K) {
      int x = P;
      while (x != -1) {
        ans[x] = i + 1;
        x = nxt[x];
      }
    } else {
      tops.insert(P);
    }
  }
  rep(i, N) cout << ans[i] << endl;
  return 0;
}