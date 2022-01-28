#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S1, S2, S3, T;
  cin >> S1 >> S2 >> S3 >> T;

  rep(i, T.length()) {
    if (T[i] == '1')
      cout << S1;
    else if (T[i] == '2')
      cout << S2;
    else if (T[i] == '3')
      cout << S3;
  }
  cout << endl;
  return 0;
}