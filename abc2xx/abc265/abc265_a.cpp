#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y, N;
  cin >> X >> Y >> N;

  if (X * 3 <= Y)
    cout << N * X << endl;
  else
    cout << Y * (N / 3) + X * (N % 3) << endl;
  return 0;
}