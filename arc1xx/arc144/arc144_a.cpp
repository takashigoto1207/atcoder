#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  cout << 2 * N << endl;
  if (N % 4) cout << N % 4;
  rep(i, N / 4) cout << 4;
  cout << endl;
  return 0;
}