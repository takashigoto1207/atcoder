#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A / 100 != 9 || B / 100 != 1)
    cout << max(9 - B / 100, A / 100 - 1) * 100 + (A % 100 - B % 100) << endl;
  else if (A % 100 / 10 != 9 || B % 100 / 10 != 0)
    cout << (A / 100 - B / 100) * 100 +
                max(9 - B % 100 / 10, A % 100 / 10) * 10 + (A % 10 - B % 10)
         << endl;
  else
    cout << (A / 10 - B / 10) * 10 + max(9 - B % 10, A % 10) << endl;
  return 0;
}