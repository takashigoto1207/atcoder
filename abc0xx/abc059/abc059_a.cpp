#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string S1, S2, S3;
  cin >> S1 >> S2 >> S3;

  cout << (char)toupper(S1[0]) << (char)toupper(S2[0]) << (char)toupper(S3[0])
       << endl;
  return 0;
}