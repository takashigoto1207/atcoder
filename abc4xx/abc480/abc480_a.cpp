#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char s11, s12, s21, s22;
  cin >> s11 >> s12 >> s21 >> s22;

  if (s11 == 'A' && s22 == 'D' || s11 == 'D' && s22 == 'A' ||
      s12 == 'A' && s21 == 'D' || s12 == 'D' && s21 == 'A') {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}