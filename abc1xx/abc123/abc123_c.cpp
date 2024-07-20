#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;

  cout << 5 + (N - 1) / min({A, B, C, D, E}) << endl;
  return 0;
}