#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  ll X;
  string S;
  cin >> N >> X >> S;

  string t;
  for (char c : S) {
    if (c == 'U') {
      if (t.size() && t.back() != 'U')
        t.pop_back();
      else
        t += c;
    } else
      t += c;
  }
  for (char c : t) {
    if (c == 'U') X /= 2;
    if (c == 'L') X *= 2;
    if (c == 'R') X = X * 2 + 1;
  }
  cout << X << endl;
  return 0;
}