#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S == "red")
    cout << "SSS" << endl;
  else if (S == "blue")
    cout << "FFF" << endl;
  else if (S == "green")
    cout << "MMM" << endl;
  else
    cout << "Unknown" << endl;
  return 0;
}