#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  count(S.begin(), S.end(), 'E') > S.size() / 2 ? cout << "East" << endl
                                                : cout << "West" << endl;
  return 0;
}