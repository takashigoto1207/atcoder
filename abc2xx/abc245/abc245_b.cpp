#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A;
  cin >> N;

  set<int> st;
  rep(i, N) cin >> A, st.insert(A);

  rep(ans, 2002) {
    if (st.find(ans) == st.end()) {
      cout << ans << endl;
      return 0;
    }
  }
  return 0;
}