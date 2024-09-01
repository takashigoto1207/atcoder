#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<int, int> E, L;
  int B, n;
  rep(i, 6) {
    cin >> n;
    E[n]++;
  }
  cin >> B;
  rep(i, 6) {
    cin >> n;
    L[n]++;
  }

  int calc = 0;
  rep(i, 10) calc += E[i] * L[i];

  if (calc == 6)
    cout << 1 << endl;
  else if (calc == 5 && L[B] == 1)
    cout << 2 << endl;
  else if (calc == 5)
    cout << 3 << endl;
  else if (calc == 4)
    cout << 4 << endl;
  else if (calc == 3)
    cout << 5 << endl;
  else
    cout << 0 << endl;
  return 0;
}