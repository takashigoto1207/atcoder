#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  if (X % 1111 == 0 || X % 1111 == 123 || X == 7890 || X == 8901 || X == 9012)
    cout << "Weak" << endl;
  else
    cout << "Strong" << endl;
  return 0;
}