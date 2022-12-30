#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int S, W;
  cin >> S >> W;

  if (S <= W)
    cout << "unsafe" << endl;
  else
    cout << "safe" << endl;
  return 0;
}