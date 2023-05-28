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
    vector<int> A(N);
    rep(j, N) cin >> A[j];
    rep(j, N - 1) st.insert({min(A[j + 1], A[j]), max(A[j + 1], A[j])});
  }
  cout << N * (N - 1) / 2 - st.size() << endl;
  return 0;
}