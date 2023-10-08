#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  bool is_prefix = true, is_suffix = true;
  rep(i, N) if (S[i] != T[i]) is_prefix = false;
  rep(i, N) if (S[i] != T[M - N + i]) is_suffix = false;

  if (is_prefix)
    cout << (is_suffix ? 0 : 1) << endl;
  else
    cout << (is_suffix ? 2 : 3) << endl;
  return 0;
}