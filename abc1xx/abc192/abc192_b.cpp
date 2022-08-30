#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  rep(i, S.size()) {
    if (!(i % 2 == 0 && islower(S[i]) || i % 2 == 1 && isupper(S[i]))) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}