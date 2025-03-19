#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double X;
  cin >> X;

  if (38.0 <= X)
    cout << "1" << endl;
  else if (37.5 <= X)
    cout << "2" << endl;
  else
    cout << "3" << endl;
  return 0;
}