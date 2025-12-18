#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> ans, cnt(N + 1);
  rep(i, 3 * N) {
    int A;
    cin >> A;
    cnt[A]++;
    if (cnt[A] == 2) ans.push_back(A);
  }

  rep(i, N) cout << ans[i] << " ";
  cout << endl;
  return 0;
}