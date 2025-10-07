#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, l;
  char c;
  string ans;

  cin >> N;
  rep(i, N) {
    cin >> c >> l;
    rep(j, l) {
      ans += c;
      if (ans.length() > 100) {
        cout << "Too Long" << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}