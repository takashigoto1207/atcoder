#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  N = N % 10;
  if (N == 2 || N == 4 || N == 5 || N == 7 || N == 9)
    cout << "hon" << endl;
  else if (N == 0 || N == 1 || N == 6 || N == 8)
    cout << "pon" << endl;
  else if (N == 3)
    cout << "bon" << endl;
  return 0;
}