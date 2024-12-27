#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  char c1, c2;
  string S;
  cin >> N >> c1 >> c2 >> S;

  string ans = "";
  for (char c : S) ans += c == c1 ? c1 : c2;

  cout << ans << endl;
  return 0;
}