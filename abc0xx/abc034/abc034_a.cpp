#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  if (x < y)
    cout << "Better" << endl;
  else
    cout << "Worse" << endl;
  return 0;
}