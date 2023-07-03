#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> S(8);
  rep(i, 8) cin >> S[i];

  rep(i, 8) {
    if (i < 7 && S[i + 1] < S[i]) {
      cout << "No" << endl;
      return 0;
    }
    if (S[i] < 100 || 675 < S[i] || S[i] % 25 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}