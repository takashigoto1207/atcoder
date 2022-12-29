#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K, A, B;
  cin >> K >> A >> B;

  if ((A - 1) / K != B / K)
    cout << "OK" << endl;
  else
    cout << "NG" << endl;
  return 0;
}