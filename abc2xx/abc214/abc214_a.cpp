#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N <= 125)
    cout << 4 << endl;
  else if (N <= 211)
    cout << 6 << endl;
  else
    cout << 8 << endl;
  return 0;
}