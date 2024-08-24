#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int p[10] = {0, 1, 2, 3, 2, 1, 2, 3, 3, 2};
  int calc = max(A, B) - min(A, B);
  cout << calc / 10 + p[calc % 10] << endl;
  return 0;
}