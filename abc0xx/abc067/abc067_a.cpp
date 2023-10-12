#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0)
    cout << "Possible" << endl;
  else
    cout << "Impossible" << endl;
  return 0;
}