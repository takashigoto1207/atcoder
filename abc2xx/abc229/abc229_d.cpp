#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int K;
  cin >> S >> K;

  int n = S.size();
  vector<int> a(n);
  rep(i, n) a[i] = S[i] == '.';

  int ans = 0, r = 0, sum = 0;
  rep(l, n) {
    while (r < n && sum + a[r] <= K) {
      sum += a[r];
      r++;
    }
    ans = max(ans, r - l);
    sum -= a[l];
  }
  cout << ans << endl;
  return 0;
}