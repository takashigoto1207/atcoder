#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H1, W1, H2, W2;
  cin >> H1 >> W1 >> H2 >> W2;

  if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}