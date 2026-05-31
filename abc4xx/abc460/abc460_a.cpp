#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  int ans = 0;

  while (M != 0) M = N % M, ans++;
  cout << ans << endl;
  return 0;
}