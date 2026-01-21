#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int P, Q, X, Y;
  cin >> P >> Q >> X >> Y;

  if (P <= X && X < P + 100 && Q <= Y && Y < Q + 100)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}