#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  set<string> st;
  rep(i, N - M + 1) rep(j, N - M + 1) {
    string str;
    rep(k, M) rep(l, M) str += S[i + k][j + l];
    st.insert(str);
  }
  cout << st.size() << endl;
  return 0;
}