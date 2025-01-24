#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  char c;
  cin >> c;

  if (c == 'O' || c == 'P' || c == 'K' || c == 'L')
    cout << "Right" << endl;
  else
    cout << "Left" << endl;
  return 0;
}