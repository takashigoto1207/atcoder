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

  int cnt = 0, mem = 0;
  rep(i, N) {
    if (S[i] == '(')
      cnt++;
    else {
      cnt--;
      if (cnt < 0) mem = max(mem, -cnt);
    }
  }
  rep(i, mem) S = "(" + S;
  N += mem;

  cnt = 0;
  rep(i, N) {
    if (S[i] == '(')
      cnt++;
    else
      cnt--;
  }
  rep(i, cnt) S = S + ")";

  cout << S << endl;
  return 0;
}