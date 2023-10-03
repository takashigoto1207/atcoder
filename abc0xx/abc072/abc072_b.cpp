#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i = i + 2) cout << s[i];
  cout << endl;
  return 0;
}