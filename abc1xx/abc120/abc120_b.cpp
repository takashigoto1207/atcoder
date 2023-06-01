#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  int cnt = 0;
  for (int i = min(A, B); 1 <= i; i--) {
    if (A % i == 0 && B % i == 0) cnt++;
    if (cnt == K) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}