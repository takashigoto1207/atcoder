#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int A, B, C, D;

  A = S[0] - '0';
  B = S[1] - '0';
  C = S[2] - '0';
  D = S[3] - '0';
  if (A + B + C + D == 7)
    cout << A << "+" << B << "+" << C << "+" << D << "=7" << endl;
  else if (A - B + C + D == 7)
    cout << A << "-" << B << "+" << C << "+" << D << "=7" << endl;
  else if (A + B - C + D == 7)
    cout << A << "+" << B << "-" << C << "+" << D << "=7" << endl;
  else if (A + B + C - D == 7)
    cout << A << "+" << B << "+" << C << "-" << D << "=7" << endl;
  else if (A - B - C + D == 7)
    cout << A << "-" << B << "-" << C << "+" << D << "=7" << endl;
  else if (A - B + C - D == 7)
    cout << A << "-" << B << "+" << C << "-" << D << "=7" << endl;
  else if (A + B - C - D == 7)
    cout << A << "+" << B << "-" << C << "-" << D << "=7" << endl;
  else if (A - B - C - D == 7)
    cout << A << "-" << B << "-" << C << "-" << D << "=7" << endl;
  return 0;
}