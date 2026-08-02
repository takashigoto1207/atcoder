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

  S = "x" + S + "x";
  int ans = 0;
  for (int i = 1; i <= N; i++)
    if (S[i - 1] == 'x' && S[i] == 'x' && S[i + 1] == 'x') ans++;

  cout << ans << endl;
  return 0;
}