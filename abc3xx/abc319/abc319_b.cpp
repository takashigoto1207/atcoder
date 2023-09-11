#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string ans;
  for (int i = 0; i <= N; i++) {
    ans += "-";
    for (int j = 1; j <= 9; j++) {
      if (N % j == 0 && i % (N / j) == 0) {
        ans[i] = j + '0';
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}