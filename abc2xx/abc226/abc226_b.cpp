#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, L;
  cin >> N;

  set<vector<int>> st;
  rep(i, N) {
    cin >> L;
    vector<int> a(L);
    rep(i, L) cin >> a[i];
    st.insert(a);
  }
  cout << st.size() << endl;
  return 0;
}