#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  vector<int> A(N);
  int idx = 0;
  rep(i, N) {
    cin >> S[i] >> A[i];
    if (A[idx] > A[i]) idx = i;
  }
  for (int i = idx; i < idx + N; i++) {
    cout << S[i % N] << endl;
  }
  return 0;
}