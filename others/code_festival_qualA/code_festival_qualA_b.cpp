#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string A;
  int B;
  cin >> A >> B;

  cout << A[(B - 1) % A.size()] << endl;
  return 0;
}