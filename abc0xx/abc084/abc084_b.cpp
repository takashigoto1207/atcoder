#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  string S;
  cin >> A >> B >> S;

  rep(i, S.size()) {
    if (i != A && !('0' <= S[i] && S[i] <= '9')) {
      cout << "No" << endl;
      return 0;
    }

    if (i == A && S[A] != '-') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}