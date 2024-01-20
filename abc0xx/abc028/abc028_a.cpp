#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N == 100)
    cout << "Perfect" << endl;
  else if (90 <= N)
    cout << "Great" << endl;
  else if (60 <= N)
    cout << "Good" << endl;
  else
    cout << "Bad" << endl;
  return 0;
}