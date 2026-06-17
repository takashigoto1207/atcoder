#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  for (char c : S)
    if ('0' <= c && c <= '9') cout << c;
  cout << endl;
  return 0;
}