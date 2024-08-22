#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string c;
  cin >> N >> c;

  cout << max({count(c.begin(), c.end(), '1'), count(c.begin(), c.end(), '2'),
               count(c.begin(), c.end(), '3'), count(c.begin(), c.end(), '4')})
       << " "
       << min({count(c.begin(), c.end(), '1'), count(c.begin(), c.end(), '2'),
               count(c.begin(), c.end(), '3'), count(c.begin(), c.end(), '4')})
       << endl;
  return 0;
}