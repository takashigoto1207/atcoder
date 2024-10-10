#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  if (abs(A) < abs(B))
    cout << "Ant" << endl;
  else if (abs(A) > abs(B))
    cout << "Bug" << endl;
  else
    cout << "Draw" << endl;
  return 0;
}