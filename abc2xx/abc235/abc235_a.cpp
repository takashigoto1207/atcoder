#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int abc;
  cin >> abc;

  cout << 111 * (abc / 100 + abc / 10 % 10 + abc % 10) << endl;
  return 0;
}