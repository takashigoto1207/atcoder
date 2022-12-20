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

  bool f = false;
  rep(i, N) {
    if (S[i] == '"') f = !f;
    if (S[i] == ',' && !f) S[i] = '.';
  }
  cout << S << endl;
  return 0;
}