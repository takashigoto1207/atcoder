#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int a1 = 0;
  int a2 = 0;
  rep(i, S.size()) {
    if (i % 2 == S[i] - '0')
      a1++;
    else
      a2++;
  }
  cout << min(a1, a2) << endl;
  return 0;
}