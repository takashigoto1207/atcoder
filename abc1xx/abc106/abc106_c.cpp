#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  ll K;
  cin >> S >> K;

  rep(i, S.size()) {
    if (S[i] != '1' && i < K) {
      cout << S[i] << endl;
      return 0;
    }
  }

  cout << 1 << endl;
  return 0;
}