#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<string> S(15);
  rep(i, 15) cin >> S[i];

  sort(S.begin(), S.end());
  cout << S[6] << endl;
  return 0;
}