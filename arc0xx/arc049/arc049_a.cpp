#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S;
  int A, B, C, D;
  cin >> S >> A >> B >> C >> D;

  cout << S.substr(0, A) + '"' + S.substr(A, B - A) + '"' + S.substr(B, C - B) +
              '"' + S.substr(C, D - C) + '"' + S.substr(D)
       << endl;
  return 0;
}