#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  vector<int> P(N);
  rep(i, N) cin >> P[i];
  int c1 = 0, c2 = 0, c3 = 0;
  rep(i, N) {
    if (P[i] <= A)
      c1++;
    else if (P[i] <= B)
      c2++;
    else
      c3++;
  }
  cout << min({c1, c2, c3}) << endl;
  return 0;
}