#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int calc = 2025 - N;
  for (int i = 1; i <= 9; i++)
    if (calc % i == 0 && calc / i <= 9) cout << i << " x " << calc / i << endl;
  return 0;
}