#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  cout << A + B + C + (pow(2, K) - 1) * max({A, B, C}) << endl;
  return 0;
}