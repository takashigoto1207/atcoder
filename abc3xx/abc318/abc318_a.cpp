#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, P;
  cin >> N >> M >> P;
  cout << (N + P - M) / P << endl;
  return 0;
}