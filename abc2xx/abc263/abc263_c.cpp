#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A;
  rep(i, N) A.push_back(0);
  rep(i, M - N) A.push_back(1);
  do {
    rep(i, M) if (A[i] == 0) cout << i + 1 << " ";
    cout << endl;
  } while (next_permutation(A.begin(), A.end()));
  return 0;
}