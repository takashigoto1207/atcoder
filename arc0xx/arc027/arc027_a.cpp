#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int h, m;
  cin >> h >> m;

  cout << (17 - h) * 60 + 60 - m << endl;
  return 0;
}