#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> a(N);
  rep(i, N) {
    int t;
    cin >> t;
    a[i] = {t, i + 1};
  }
  sort(a.begin(), a.end(), greater<>());

  rep(i, N) cout << a[i].second << endl;
  return 0;
}