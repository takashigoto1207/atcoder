#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  cout << s.substr(0, 4) << " " << s.substr(4) << endl;
  return 0;
}