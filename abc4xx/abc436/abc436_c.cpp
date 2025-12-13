#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int R, C, ans = 0;
  set<pair<int, int>> st;
  rep(i, M) {
    cin >> R >> C;
    if (st.find({R, C}) != st.end()) continue;
    if (st.find({R + 1, C}) != st.end()) continue;
    if (st.find({R, C + 1}) != st.end()) continue;
    if (st.find({R + 1, C + 1}) != st.end()) continue;
    st.emplace(R, C);
    st.emplace(R + 1, C);
    st.emplace(R, C + 1);
    st.emplace(R + 1, C + 1);
    ans++;
  }
  cout << ans << endl;
  return 0;
}