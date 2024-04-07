#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  rep(i, N) {
    if ((i + 1) % 3 != 0)
      cout << "o";
    else
      cout << "x";
  }
  cout << endl;
  return 0;
}