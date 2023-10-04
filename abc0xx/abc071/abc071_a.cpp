#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (abs(x - a) > abs(x - b))
    cout << "B" << endl;
  else
    cout << "A" << endl;
  return 0;
}