#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  char x = 'i';
  for (char c : S) {
    if (c == x)
      x = x == 'i' ? 'o' : 'i';
    else
      ans++;
  }
  if (x == 'o') ans++;
  cout << ans << endl;
  return 0;
}