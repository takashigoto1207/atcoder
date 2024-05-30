#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M), C;

  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  C = A;
  rep(i, M) C.push_back(B[i]);
  sort(C.begin(), C.end());

  set<int> st(A.begin(), A.end());
  rep(i, N + M - 1) {
    if (st.contains(C[i]) && st.contains(C[i + 1])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}