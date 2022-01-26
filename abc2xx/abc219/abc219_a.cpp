#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  if (X < 40) {
    cout << 40 - X << endl;
    return 0;
  } else if (X < 70) {
    cout << 70 - X << endl;
    return 0;
  } else if (X < 90) {
    cout << 90 - X << endl;
    return 0;
  } else {
    cout << "expert" << endl;
    return 0;
  }
  return 0;
}