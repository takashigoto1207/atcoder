#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  rep(i, S.size() - 1) {
    if (S[S.size() - 2 - i] == 'W' && S[S.size() - 1 - i] == 'A') {
      S[S.size() - 2 - i] = 'A';
      S[S.size() - 1 - i] = 'C';
    }
  }

  cout << S << endl;
  return 0;
}