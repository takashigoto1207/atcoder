#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  int x = 0;
  rep(i, S.size()) {
    while (S[i] != T[x]) x++;
    cout << x + 1 << " ";
    x++;
  }
  cout << endl;
  return 0;
}