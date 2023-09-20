#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  while ((ans + 1) * (ans + 1) <= N) ans++;
  cout << ans * ans << endl;
  return 0;
}