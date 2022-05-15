#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, W, calc;
  cin >> N >> W;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  set<int> st;
  rep(i, N) {
    calc = A[i];
    if (calc <= W) st.insert(calc);
  }
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      calc = A[i] + A[j];
      if (calc <= W) st.insert(calc);
    }
  }
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      for (int k = j + 1; k < N; k++) {
        calc = A[i] + A[j] + A[k];
        if (calc <= W) st.insert(calc);
      }
    }
  }

  cout << st.size() << endl;
  return 0;
}