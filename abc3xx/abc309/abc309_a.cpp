#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;
  if (A % 3 != 0 && A + 1 == B)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}