#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int L, R;
  string S;
  cin >> L >> R >> S;

  reverse(S.begin() + L - 1, S.begin() + R);
  cout << S << endl;
  return 0;
}