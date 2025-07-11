#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string P;
  int L;
  cin >> P >> L;

  if (L <= size(P))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}