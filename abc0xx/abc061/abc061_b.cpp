#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  map<int, int> mp;
  int a;
  rep(i, 2 * M) {
    cin >> a;
    mp[a]++;
  }

  rep(i, N) cout << mp[i + 1] << endl;
  return 0;
}