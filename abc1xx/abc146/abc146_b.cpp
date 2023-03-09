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

  rep(i, S.size()) {
    int x = (S[i] - 'A' + N) % 26;
    cout << (char)('A' + x);
  }
  cout << endl;
  return 0;
}