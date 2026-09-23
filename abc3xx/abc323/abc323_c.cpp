#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  vector<string> S(N);
  rep(i, M) cin >> A[i];
  rep(i, N) cin >> S[i];

  vector<int> p(N);
  rep(i, N) {
    p[i] = i + 1;
    rep(j, M) if (S[i][j] == 'o') p[i] += A[j];
  }

  int mx = *max_element(p.begin(), p.end());
  rep(i, N) {
    vector<int> x;
    rep(j, M) if (S[i][j] == 'x') x.push_back(A[j]);
    sort(x.begin(), x.end());
    int ans = 0;
    while (p[i] < mx) {
      p[i] += x.back();
      x.pop_back();
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}