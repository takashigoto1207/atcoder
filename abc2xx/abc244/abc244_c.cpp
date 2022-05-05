#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<bool> used(2 * N + 2, false);
  while (true) {
    for (int i = 1; i <= 2 * N + 1; i++) {
      if (!used[i]) {
        cout << i << endl;
        used[i] = true;
        break;
      }
    }
    int x;
    cin >> x;
    if (x == 0) break;
    used[x] = true;
  }
  return 0;
}