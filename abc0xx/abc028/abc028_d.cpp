#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double N, K;
  cin >> N >> K;

  cout << setprecision(20)
       << ((N - K) * (K - 1) * 6 + (N - 1) * 3 + 1) / N / N / N << endl;
  return 0;
}