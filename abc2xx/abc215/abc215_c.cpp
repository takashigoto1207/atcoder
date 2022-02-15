#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  int K;
  cin >> S >> K;

  sort(S.begin(), S.end());
  while (--K) next_permutation(S.begin(), S.end());
  cout << S << endl;
  return 0;
}