#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());

  if (s < t)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}