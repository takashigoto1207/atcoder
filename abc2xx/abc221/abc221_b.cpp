#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S, T;
  cin >> S >> T;

  if (S == T) {
    cout << "Yes" << endl;
    return 0;
  }

  rep(i, S.size() - 1) {
    swap(S[i], S[i + 1]);
    if (S == T) {
      cout << "Yes" << endl;
      return 0;
    }
    swap(S[i + 1], S[i]);
  }

  cout << "No" << endl;
  return 0;
}