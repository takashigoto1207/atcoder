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
  rep(i, N) cin >> S[i];

  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;
      string t = S[i] + S[j];
      if (t == string(t.rbegin(), t.rend())) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}