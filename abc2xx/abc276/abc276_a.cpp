#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  for (int i = S.size(); 1 <= i; i--) {
    if (S[i - 1] == 'a') {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}