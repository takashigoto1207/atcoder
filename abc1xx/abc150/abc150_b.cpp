#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  rep(i, N - 2) if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') ans++;
  cout << ans << endl;
  return 0;
}