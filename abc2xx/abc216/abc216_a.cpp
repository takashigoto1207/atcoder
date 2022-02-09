#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string x = S.substr(0, S.size() - 2);
  int y = S[S.size() - 1] - '0';
  if (y <= 2)
    cout << x << "-" << endl;
  else if (y <= 6)
    cout << x << endl;
  else
    cout << x << "+" << endl;
  return 0;
}