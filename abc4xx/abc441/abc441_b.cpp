#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int solve(string x, string w) {
  for (char c : w)
    if (x.find(c) == string::npos) return false;
  return true;
}

int main() {
  int N, M, Q;
  string S, T;
  cin >> N >> M >> S >> T >> Q;

  vector<string> w(Q);
  rep(i, Q) cin >> w[i];

  rep(i, Q) {
    bool takahashi = solve(S, w[i]);
    bool aoki = solve(T, w[i]);

    if (takahashi && aoki)
      cout << "Unknown" << endl;
    else if (takahashi)
      cout << "Takahashi" << endl;
    else
      cout << "Aoki" << endl;
  }
  return 0;
}