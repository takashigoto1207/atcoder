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

  string mem;
  rep(i, N) {
    if (S[i] == 'A')
      mem += "BB";
    else
      mem += S[i];
  }

  string ans;
  rep(i, mem.size()) {
    if (mem[i] == 'B' && mem[i + 1] == 'B')
      ans += 'A', i += 1;
    else
      ans += mem[i];
  }
  cout << ans << endl;
  return 0;
}