#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, B, K;
  cin >> A >> B >> K;

  int ans = 0;
  while (A < B) A *= K, ans++;
  cout << ans << endl;
  return 0;
}