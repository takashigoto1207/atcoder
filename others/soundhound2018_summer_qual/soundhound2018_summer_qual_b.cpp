#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int w;
  cin >> S >> w;

  rep(i, S.size() / w + min(1, (int)S.size() % w)) cout << S[i * w];
  return 0;
}