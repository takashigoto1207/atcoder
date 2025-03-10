#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  if ((B - A) % 2 == 0)
    cout << "Alice" << endl;
  else
    cout << "Borys" << endl;
  return 0;
}