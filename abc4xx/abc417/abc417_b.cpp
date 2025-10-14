#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];

  rep(i, M) {
    int B;
    cin >> B;
    auto it = find(A.begin(), A.end(), B);
    if (it == A.end()) continue;
    A.erase(it);
  }

  rep(i, A.size()) cout << A[i] << " ";
  cout << endl;
  return 0;
}