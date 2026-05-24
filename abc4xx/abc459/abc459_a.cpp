#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X;
  cin >> X;

  string S = "HelloWorld";
  rep(i, S.size()) if (i != X - 1) cout << S[i];
  cout << endl;
  return 0;
}