#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char a, b;
  cin >> a >> b;

  if ((a == 'H' && b == 'H') || (a == 'D' && b == 'D'))
    cout << 'H' << endl;
  else
    cout << 'D' << endl;
  return 0;
}