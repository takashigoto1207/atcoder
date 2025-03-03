#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  rep(i, S.size()) for (int j = i + 1; j < S.size(); j++) {
    for (int k = j + 1; k < S.size(); k++) {
      if (j - i == k - j and S[i] == 'A' and S[j] == 'B' and S[k] == 'C') ans++;
    }
  }

  cout << ans << endl;
  return 0;
}