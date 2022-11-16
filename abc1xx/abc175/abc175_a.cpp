#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S == "RRR")
    cout << 3 << endl;
  else if (S == "SRR" || S == "RRS")
    cout << 2 << endl;
  else if (S == "SSR" || S == "RSS" || S == "SRS" || S == "RSR")
    cout << 1 << endl;
  else if (S == "SSS")
    cout << 0 << endl;
  return 0;
}