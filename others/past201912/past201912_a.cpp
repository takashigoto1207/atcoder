#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  for (char c : S) {
    if (c < '0' || '9' < c) {
      cout << "error" << endl;
      return 0;
    }
  }
  int x = stoi(S);
  cout << 2 * x << endl;
  return 0;
}