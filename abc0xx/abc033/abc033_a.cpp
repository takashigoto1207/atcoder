#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N % 1111 == 0)
    cout << "SAME" << endl;
  else
    cout << "DIFFERENT" << endl;
  return 0;
}