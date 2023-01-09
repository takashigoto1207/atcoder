#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T;
  cin >> T;

  vector<int> ans(T, 0);
  rep(i, T) {
    int N;
    cin >> N;
    rep(j, N) {
      int A;
      cin >> A;
      if (A % 2 == 1) ans[i]++;
    }
  }
  for (int x : ans) cout << x << endl;
  return 0;
}