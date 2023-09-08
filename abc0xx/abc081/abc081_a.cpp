#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s;
  cin >> s;

  cout << count(s.begin(), s.end(), '1') << endl;
  return 0;
}