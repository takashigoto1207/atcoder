#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int calc = (N - 1) % (A + B);
  if (calc < A)
    cout << "Ant" << endl;
  else
    cout << "Bug" << endl;
  return 0;
}