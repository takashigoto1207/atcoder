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
  vector<int> C(N);
  rep(i, N) cin >> S[i] >> C[i];
  sort(S.begin(), S.end());

  int calc = 0;
  rep(i, N) calc += C[i];
  cout << S[calc % N] << endl;
  return 0;
}