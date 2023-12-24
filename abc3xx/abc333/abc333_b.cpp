#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char S1, S2, T1, T2;
  cin >> S1 >> S2 >> T1 >> T2;

  auto near = [](char x, char y) {
    if (x > y) swap(x, y);
    return y - x == 1 or y - x == 4;
  };

  if (near(S1, S2) == near(T1, T2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}