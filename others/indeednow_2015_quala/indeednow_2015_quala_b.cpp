#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string x = "indeednow";
  sort(x.begin(), x.end());

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  rep(i, N) {
    sort(S[i].begin(), S[i].end());
    if (S[i] == x)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}