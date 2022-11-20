#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool f(int h, int m) {
  int h2 = (h / 10) * 10 + m / 10;
  int m2 = (h % 10) * 10 + m % 10;
  return h2 <= 23 && m2 <= 59;
}

int main() {
  int H, M;
  cin >> H >> M;

  while (!f(H, M)) {
    M++;
    if (M == 60) M = 0, H++;
    if (H == 24) H = 0;
  }
  cout << H << " " << M << endl;
  return 0;
}