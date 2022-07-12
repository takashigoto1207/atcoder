#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

using P = pair<char, int>;

vector<P> rle(const string& str) {
  vector<P> res;
  for (char c : str) {
    if (res.size() > 0 && res.back().first == c)
      res.back().second++;
    else
      res.emplace_back(c, 1);
  }
  return res;
}

bool solve() {
  string S, T;
  cin >> S >> T;
  auto a = rle(S);
  auto b = rle(T);

  if (a.size() != b.size()) return false;
  rep(i, a.size()) {
    if (a[i].first != b[i].first) return false;
    if (a[i].second == 1 && b[i].second != 1) return false;
    if (2 <= a[i].second && b[i].second < a[i].second) return false;
  }
  return true;
}

int main() {
  if (solve())
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}