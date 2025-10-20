#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  set<pair<int, int>> st;
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    if (u == v) continue;
    st.insert(pair<int, int>(max(u, v), min(u, v)));
  }
  cout << M - st.size() << endl;
  return 0;
}