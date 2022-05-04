#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

bool prime(int x) {
  for (int i = 2; i * i <= x; i++)
    if (x % i == 0) return 0;
  return 1;
}

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  for (int i = A; i <= B; i++) {
    bool flg = false;
    for (int j = C; j <= D; j++)
      if (prime(i + j)) flg = true;
    if (!flg) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}