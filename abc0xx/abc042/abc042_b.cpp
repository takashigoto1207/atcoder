#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L;
  cin >> N >> L;

  vector<string> S(N);
  rep(i, N) cin >> S[i];
  sort(S.begin(), S.end());

  rep(i, N) cout << S[i];
  cout << endl;
  return 0;
}