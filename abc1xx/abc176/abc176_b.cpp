#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string N;
  cin >> N;

  int sum = 0;
  rep(i, N.size()) sum += N[i] - '0';
  if (sum % 9 == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}