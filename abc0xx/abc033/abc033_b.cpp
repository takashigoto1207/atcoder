#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  vector<int> P(N);
  int sum = 0;
  rep(i, N) {
    cin >> S[i] >> P[i];
    sum += P[i];
  }

  rep(i, N) {
    if (sum / 2 < P[i]) {
      cout << S[i] << endl;
      return 0;
    }
  }

  cout << "atcoder" << endl;
  return 0;
}