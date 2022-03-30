#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 1;
  while (ans * (ans + 1) / 2 < N) ans++;
  cout << ans << endl;
  return 0;
}