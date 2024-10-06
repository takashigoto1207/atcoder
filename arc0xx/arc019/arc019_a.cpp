#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  rep(i, S.size()) {
    if (S[i] == 'O' || S[i] == 'D')
      S[i] = '0';
    else if (S[i] == 'I')
      S[i] = '1';
    else if (S[i] == 'Z')
      S[i] = '2';
    else if (S[i] == 'S')
      S[i] = '5';
    else if (S[i] == 'B')
      S[i] = '8';
  }
  cout << S << endl;
  return 0;
}