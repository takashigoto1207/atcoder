#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int a = S[0] - '0';
  int b = S[2] - '0';
  cout << a * b << endl;
  return 0;
}