#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int W, H;
  cin >> W >> H;

  if (H * 4 == W * 3)
    cout << "4:3" << endl;
  else
    cout << "16:9" << endl;
  return 0;
}