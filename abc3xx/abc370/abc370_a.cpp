#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, R;
  cin >> L >> R;

  if (L == 0 && R == 0)
    cout << "Invalid" << endl;
  else if (L == 0 && R == 1)
    cout << "No" << endl;
  else if (L == 1 && R == 0)
    cout << "Yes" << endl;
  else
    cout << "Invalid" << endl;
  return 0;
}