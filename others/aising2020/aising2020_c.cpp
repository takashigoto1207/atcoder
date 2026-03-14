#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> cnt(N + 1, 0);
  for (int x = 1; x <= 100; x++) {
    for (int y = 1; y <= 100; y++) {
      for (int z = 1; z <= 100; z++) {
        int calc = x * x + y * y + z * z + x * y + y * z + z * x;
        if (calc <= 10000) cnt[calc]++;
      }
    }
  }
  for (int i = 1; i <= N; i++) cout << cnt[i] << endl;
  return 0;
}