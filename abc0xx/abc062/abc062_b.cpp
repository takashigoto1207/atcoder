#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> a(H);
  rep(i, H) cin >> a[i];

  rep(i, W + 2) cout << "#";
  cout << endl;
  rep(i, H) cout << "#" << a[i] << "#" << endl;
  rep(i, W + 2) cout << "#";
}