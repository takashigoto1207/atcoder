#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  rep(i, 7) {
    if (pow(2, i + 1) > N) {
      cout << pow(2, i) << endl;
      return 0;
    }
  }
  return 0;
}