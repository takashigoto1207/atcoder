#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), ans;
  rep(i, N) cin >> A[i];
  rep(i, N) {
    ans.push_back(A[i]);
    while (ans.size() > 1) {
      if (ans[ans.size() - 2] == ans[ans.size() - 1]) {
        ans[ans.size() - 2]++;
        ans.pop_back();
      } else
        break;
    }
  }
  cout << ans.size() << endl;
  return 0;
}