#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int B, G;
  cin >> B >> G;

  if (B > G)
    cout << "Bat" << endl;
  else
    cout << "Glove" << endl;
  return 0;
}