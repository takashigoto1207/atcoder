#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, R;
  cin >> L >> R;

  string s = "atcoder";
  for (int i = L; i <= R; i++) cout << s[i - 1];
  cout << endl;
  return 0;
}