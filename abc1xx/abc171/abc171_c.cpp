#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  string ans;
  while (N) {
    N--;
    ans += 'a' + N % 26;
    N /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}