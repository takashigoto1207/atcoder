#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S1, S2;
  cin >> S1 >> S2;

  if ((S1[0] == '.' && S2[1] == '.') || (S1[1] == '.' && S2[0] == '.'))
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}