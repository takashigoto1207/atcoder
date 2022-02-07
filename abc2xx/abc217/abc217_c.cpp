#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  int t;
  rep(i, N) {
    cin >> t;
    p[t - 1] = i;
  }

  rep(i, N) cout << p[i] + 1 << endl;
  return 0;
}