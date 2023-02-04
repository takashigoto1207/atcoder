#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> ans(N);
  rep(i, N) {
    int A, B;
    cin >> A >> B;
    ans[i] = A + B;
  }
  rep(i, N) cout << ans[i] << endl;
  return 0;
}