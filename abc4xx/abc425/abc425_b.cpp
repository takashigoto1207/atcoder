#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), P(N);
  rep(i, N) cin >> A[i];
  rep(i, N) P[i] = i + 1;

  do {
    bool flg = true;
    rep(i, N) if (A[i] != -1 && P[i] != A[i]) flg = false;

    if (flg) {
      cout << "Yes" << endl;
      rep(i, N) cout << P[i] << " ";
      cout << endl;
      return 0;
    }
  } while (next_permutation(P.begin(), P.end()));
  cout << "No" << endl;
  return 0;
}