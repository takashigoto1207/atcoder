#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  cin >> S;

  cout << S.substr(0, S.find("|")) + S.substr(S.rfind("|") + 1) << endl;
  return 0;
}