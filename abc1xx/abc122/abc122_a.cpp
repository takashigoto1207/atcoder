#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char b;
  cin >> b;

  if (b == 'A')
    cout << 'T' << endl;
  else if (b == 'T')
    cout << 'A' << endl;
  else if (b == 'C')
    cout << 'G' << endl;
  else if (b == 'G')
    cout << 'C' << endl;
  return 0;
}