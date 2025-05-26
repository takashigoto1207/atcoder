#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, X;
  cin >> R >> X;

  if (X == 1 && 1600 <= R && R <= 2999)
    cout << "Yes" << endl;
  else if (X == 2 && 1200 <= R && R <= 2399)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}