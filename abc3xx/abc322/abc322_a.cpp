#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  cout << (S.find("ABC") == string::npos ? -1 : int(S.find("ABC")) + 1) << endl;
  return 0;
}