#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int M, D;
  cin >> M >> D;

  if (M == 1 && D == 7 || M == 3 && D == 3 || M == 5 && D == 5 ||
      M == 7 && D == 7 || M == 9 && D == 9)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}