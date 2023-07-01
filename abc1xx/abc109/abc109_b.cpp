#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<string> st;
  vector<string> W(N);

  rep(i, N) {
    cin >> W[i];
    st.insert(W[i]);
  }

  if (st.size() != N) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 1; i < N; i++) {
    if (W[i - 1][W[i - 1].size() - 1] != W[i][0]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}