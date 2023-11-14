#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int A, B;
  cin >> A >> B;

  if (A == 1) A += 13;
  if (B == 1) B += 13;

  if (A > B)
    cout << "Alice" << endl;
  else if (B > A)
    cout << "Bob" << endl;
  else
    cout << "Draw" << endl;
  return 0;
}