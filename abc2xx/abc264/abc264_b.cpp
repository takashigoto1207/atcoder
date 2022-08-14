#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, C;
  cin >> R >> C;

  if (max(abs(R - 8), abs(C - 8)) % 2)
    cout << "black" << endl;
  else
    cout << "white" << endl;
  return 0;
}