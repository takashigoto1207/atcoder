#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<vector<int>> A(9, vector<int>(9));
  rep(i, 9) rep(j, 9) cin >> A[i][j];

  set<int> st;
  rep(i, 9) {
    rep(j, 9) st.insert(A[i][j]);
    if (st.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
    st.clear();
    rep(j, 9) st.insert(A[j][i]);
    if (st.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
    st.clear();
  }
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      rep(k, 3) rep(l, 3) st.insert(A[i + k][j + l]);
      if (st.size() != 9) {
        cout << "No" << endl;
        return 0;
      }
      st.clear();
    }
  }
  cout << "Yes" << endl;
  return 0;
}