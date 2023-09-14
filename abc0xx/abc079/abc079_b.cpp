#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> L(N + 1);
  L[0] = 2;
  L[1] = 1;
  for (int i = 2; i <= N; i++) L[i] = L[i - 2] + L[i - 1];

  cout << L[N] << endl;
  return 0;
}