#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;
  rep(i, N) {
    if (S[i] == '0') S[i] = 'o';
    if (S[i] == '1') S[i] = 'l';
    if (T[i] == '0') T[i] = 'o';
    if (T[i] == '1') T[i] = 'l';
  }
  if (S == T)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}