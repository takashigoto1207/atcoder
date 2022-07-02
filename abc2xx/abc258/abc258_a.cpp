#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K;
  cin >> K;

  if (K >= 60)
    cout << "22:";
  else
    cout << "21:";

  cout << setfill('0') << right << setw(2) << K % 60 << endl;

  return 0;
}