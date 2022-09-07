#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char C1, C2, C3;
  cin >> C1 >> C2 >> C3;

  if (C1 == C2 && C2 == C3)
    cout << "Won" << endl;
  else
    cout << "Lost" << endl;
  return 0;
}