#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A > C || (A == C && B > D))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}