#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string N;
  cin >> N;

  if (N.size() <= 3)
    cout << N << endl;
  else
    cout << N.substr(0, 3) << string(N.size() - 3, '0') << endl;
  return 0;
}