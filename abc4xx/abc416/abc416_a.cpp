#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, L, R;
  string S;
  cin >> N >> L >> R >> S;

  for (int i = L - 1; i < R; i++)
    if (S[i] != 'o') {
      cout << "No" << endl;
      return 0;
    }
  cout << "Yes" << endl;
  return 0;
}