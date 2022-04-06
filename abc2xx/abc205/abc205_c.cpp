#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (C % 2 == 0) {
    if (abs(A) == abs(B))
      cout << "=" << endl;
    else if (abs(A) < abs(B))
      cout << "<" << endl;
    else if (abs(A) > abs(B))
      cout << ">" << endl;
  } else {
    if (A == B)
      cout << "=" << endl;
    else if (A < B)
      cout << "<" << endl;
    else if (A > B)
      cout << ">" << endl;
  }
  return 0;
}