#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;

  cout << S.substr(A, N - A - B) << endl;
  return 0;
}