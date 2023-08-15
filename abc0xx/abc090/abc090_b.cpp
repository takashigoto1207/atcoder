#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = A; i <= B; i++) {
    if (i / 10000 == i % 10 && (i % 10000) / 1000 == (i % 100) / 10) ans++;
  }
  cout << ans << endl;
  return 0;
}