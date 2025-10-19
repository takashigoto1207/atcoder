#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll a, b;
  cin >> a >> b;

  if (b < 0) {
    if ((b - a + 1) % 2 == 0)
      cout << "Positive" << endl;
    else
      cout << "Negative" << endl;
  } else if (a <= 0 && 0 <= b)
    cout << "Zero" << endl;
  else
    cout << "Positive" << endl;
  return 0;
}