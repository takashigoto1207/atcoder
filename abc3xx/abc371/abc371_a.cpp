#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char x, y, z;
  cin >> x >> y >> z;

  if (x != y)
    cout << "A" << endl;
  else if (x == z)
    cout << "B" << endl;
  else
    cout << "C" << endl;
  return 0;
}