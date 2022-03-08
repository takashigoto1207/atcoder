#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, X, Y;
  cin >> N >> A >> X >> Y;

  if (N <= A)
    cout << N * X << endl;
  else
    cout << X * A + (N - A) * Y << endl;
  return 0;
}