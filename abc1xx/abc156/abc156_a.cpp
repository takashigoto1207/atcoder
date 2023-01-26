#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, R;
  cin >> N >> R;

  if (N >= 10)
    cout << R << endl;
  else
    cout << R + 100 * (10 - N) << endl;
  return 0;
}