#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  if (n == 2 || n == 3 || n == 4)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}