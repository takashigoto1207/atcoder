#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll sum = 0;
  int A;
  rep(i, N) {
    cin >> A;
    sum += A;
  }

  if (sum % 2 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}