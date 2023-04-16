#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  bool flg = false;
  rep(i, N) {
    if (S[i] == 'o')
      flg = true;
    else if (S[i] == 'x') {
      cout << "No" << endl;
      return 0;
    }
  }

  if (flg)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}