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

  if (N % 2 == 0) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, (N + 1) / 2 - 1) {
    if (S[i] != '1') {
      cout << "No" << endl;
      return 0;
    }
  }

  if (S[(N + 1) / 2 - 1] != '/') {
    cout << "No" << endl;
    return 0;
  }

  for (int i = (N + 1) / 2; i < N; i++) {
    if (S[i] != '2') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}