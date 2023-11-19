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

  int ans = 0;
  int calc = 0;
  for (int i = 0; i < N; i++) {
    ans = max(calc, ans);
    if (S[i] == 'I') calc++;
    if (S[i] == 'D') calc--;
    ans = max(calc, ans);
  }
  cout << ans << endl;
  return 0;
}