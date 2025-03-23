#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  rep(i, (N - 1) / 2) cout << '-';
  if (N % 2 == 1)
    cout << "=";
  else
    cout << "==";
  rep(i, (N - 1) / 2) cout << '-';
  cout << endl;
  return 0;
}