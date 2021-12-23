#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> s(N);
  rep(i, N) {
    rep(j, 3) {
      int a;
      cin >> a;
      s[i] += a;
    }
  }
  vector<int> d = s;
  sort(d.rbegin(), d.rend());
  int mx = d[K - 1];
  rep(i, N) {
    if (s[i] + 300 >= mx)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}