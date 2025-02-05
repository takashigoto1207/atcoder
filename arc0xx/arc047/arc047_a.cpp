#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L;
  string S;
  cin >> N >> L >> S;

  int tab = 1;
  int ans = 0;
  rep(i, N) {
    if (S[i] == '+')
      tab++;
    else
      tab--;

    if (tab > L) {
      tab = 1;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}