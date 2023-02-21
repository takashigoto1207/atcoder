#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, A;
  cin >> N >> K;

  set<int> st;
  rep(i, N) {
    cin >> A;
    st.insert(A);
  }

  int ans = 0;
  for (int x : st) {
    if (x == ans && ans < K)
      ans++;
    else {
      cout << ans << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}