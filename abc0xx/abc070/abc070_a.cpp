#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  if (N / 100 == N % 10)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}