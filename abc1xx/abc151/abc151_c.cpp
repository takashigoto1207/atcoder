#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> prob(N, 0), wa(N, 0);
  int ans = 0;

  rep(i, M) {
    int p;
    string s;
    cin >> p >> s;
    if (s == "WA" && prob[p - 1] != 1)
      wa[p - 1]++;
    else if (s == "AC" && prob[p - 1] != 1) {
      ans++;
      prob[p - 1] = 1;
    }
  }

  int pna = 0;
  rep(i, N) if (prob[i] == 1) pna = pna + wa[i];

  cout << ans << " " << pna << endl;
  return 0;
}