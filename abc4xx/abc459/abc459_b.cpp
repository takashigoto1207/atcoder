#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string ans, S;
  string converter = "22233344455566677778889999";

  rep(i, N) {
    cin >> S;
    ans += converter[S[0] - 'a'];
  }
  cout << ans << endl;
  return 0;
}