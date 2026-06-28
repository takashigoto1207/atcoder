#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  char X;
  cin >> N >> X;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  bool flg = false;
  rep(i, N) {
    if (S[i][X - 'A'] == 'o') {
      flg = true;
      break;
    }
  }

  if (flg)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}