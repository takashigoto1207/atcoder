#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N % 2 == 1)
    cout << "Black" << endl;
  else
    cout << "White" << endl;
  return 0;
}