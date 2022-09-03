#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;
  if (S == "Monday")
    cout << 5 << endl;
  else if (S == "Tuesday")
    cout << 4 << endl;
  else if (S == "Wednesday")
    cout << 3 << endl;
  else if (S == "Thursday")
    cout << 2 << endl;
  else
    cout << 1 << endl;
  return 0;
}