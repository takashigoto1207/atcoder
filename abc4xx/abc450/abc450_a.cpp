#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  for (int i = N; 1 <= i; i--) {
    cout << i;
    if (i != 1) cout << ",";
  }
  cout << endl;
  return 0;
}