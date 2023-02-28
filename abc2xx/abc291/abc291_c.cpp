#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  set<pair<int, int>> p({{0, 0}});
  int x = 0, y = 0;
  for (auto c : S) {
    if (c == 'U') y++;
    if (c == 'D') y--;
    if (c == 'R') x++;
    if (c == 'L') x--;
    if (p.find({x, y}) != p.end()) {
      cout << "Yes" << endl;
      return 0;
    }
    p.insert({x, y});
  }
  cout << "No" << endl;
}