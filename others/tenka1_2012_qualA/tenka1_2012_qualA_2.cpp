#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  getline(cin, S);

  cout << regex_replace(S, regex(" +"), ",") << endl;
  return 0;
}