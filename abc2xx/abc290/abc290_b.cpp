#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  int cnt = 0;
  rep(i, N) {
    if (S[i] == 'o') cnt++;
    if (cnt <= K)
      cout << S[i];
    else
      cout << "x";
  }
  cout << endl;
  return 0;
}