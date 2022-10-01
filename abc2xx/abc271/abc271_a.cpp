#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int a = N / 16, b = N % 16;

  if (a <= 9)
    cout << a;
  else
    cout << (char)('A' + a - 10);

  if (b <= 9)
    cout << b;
  else
    cout << (char)('A' + b - 10);

  cout << endl;
  return 0;
}