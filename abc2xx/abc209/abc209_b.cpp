#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  int calc = 0, A;
  rep(i, N) cin >> A, calc += A;
  calc -= N / 2;

  if (calc <= X)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}