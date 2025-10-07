#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int cnt = 0;
  rep(i, S.size()) {
    if (S[i] == '#') {
      cnt++, cout << i + 1;
      if (cnt == 2)
        cnt = 0, cout << endl;
      else
        cout << ',';
    }
  }
  return 0;
}